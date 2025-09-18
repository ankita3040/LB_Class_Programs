#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h>

#define MAX_SIZE 1024

// Caesar Cipher
void Encrypt_XOR_Cipher(char *Src,char *Dest, char key)
{
    int fdSrc = 0, fdDest = 0, iRet = 0, i = 0;
    char Buffer [MAX_SIZE] = {'\0'};

    fdSrc = open(Src,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file \n");
        return;
    }

    fdDest = open(Dest,O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if(fdSrc == -1)
    {
        printf("Unable to open destination file \n");
        return;
    }

    while ((iRet = read(fdSrc,Buffer,sizeof(Buffer))) > 0)
    {
        printf("%d",iRet);
        for(i  = 0; i < iRet; i++)
        {
            Buffer[i] = Buffer[i] ^ key;
        }

        write(fdDest,Buffer,iRet);
    }

    close(fdSrc);
    close(fdDest);
    
}

void Encrypt_Caesar_Cipher(char *Src,char *Dest, int key)
{
    int fdSrc = 0, fdDest = 0, iRet = 0, i = 0;
    char Buffer [MAX_SIZE] = {'\0'};

    fdSrc = open(Src,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file \n");
        return;
    }

    fdDest = open(Dest,O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if(fdSrc == -1)
    {
        printf("Unable to open destination file \n");
        return;
    }

    while ((iRet = read(fdSrc,Buffer,sizeof(MAX_SIZE))) > 0)
    {
        printf("%d",iRet);
        for(i  = 0; i < iRet; i++)
        {
            Buffer[i] = (Buffer[i] + key) % 256;
        }

        write(fdDest,Buffer,iRet);
    }

    close(fdSrc);
    close(fdDest);  

}

void Decrypt_XOR_Cipher(char *Src,char *Dest, char key)
{
    int fdSrc = 0, fdDest = 0, iRet = 0, i = 0;
    char Buffer [MAX_SIZE] = {'\0'};

    fdSrc = open(Src,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file \n");
        return;
    }

    fdDest = open(Dest,O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if(fdSrc == -1)
    {
        printf("Unable to open destination file \n");
        return;
    }

    while ((iRet = read(fdSrc,Buffer,sizeof(Buffer))) > 0)
    {
        printf("%d",iRet);
        for(i  = 0; i < iRet; i++)
        {
            Buffer[i] = Buffer[i] ^ key;
        }

        write(fdDest,Buffer,iRet);
    }

    close(fdSrc);
    close(fdDest);
    
}


void Decrypt_Caesar_Cipher(char *Src,char *Dest, int key)
{
    int fdSrc = 0, fdDest = 0, iRet = 0, i = 0;
    char Buffer [MAX_SIZE] = {'\0'};

    fdSrc = open(Src,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file \n");
        return;
    }

    fdDest = open(Dest,O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if(fdSrc == -1)
    {
        printf("Unable to open destination file \n");
        return;
    }

    while ((iRet = read(fdSrc,Buffer,sizeof(MAX_SIZE))) > 0)
    {
        printf("%d",iRet);
        for(i  = 0; i < iRet; i++)
        {
            Buffer[i] = (Buffer[i] - key) % 256;
        }

        write(fdDest,Buffer,iRet);
    }

    close(fdSrc);
    close(fdDest);  

}



int main()
{   
    char SrcName[50] ={'\0'};
    char DestName[50] ={'\0'};
    int key = 0;

    printf("Enter name of original file \n");
    scanf("%s",&SrcName);

    printf("Enter the name of new encrypted file\n");
    scanf("%s",&DestName);

    printf("Enter key for encrption \n");
    scanf(" %d",&key);

    Encrypt_Caesar_Cipher(SrcName,DestName,key);

    printf("\nEnter the name of encrpted file\n");
    scanf("%s",&SrcName);

    printf("Enter the name of new decrpted filr\n");
    scanf("%s",&DestName);

    
    printf("Enter key for decrption \n");
    scanf(" %d",&key);

    Decrypt_Caesar_Cipher(SrcName,DestName,key);

    return 0;
}
