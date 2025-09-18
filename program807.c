#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


// XOR Cipher
void Encrypt_XOR_Cipher(char *Src,char *Dest, char key)
{
    int fdSrc = 0, fdDest = 0;

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

}
int main()
{   
    char SrcName[50] ={'\0'};
    char DestName[50] ={'\0'};
    char key = '\0';

    printf("Enter name of original file \n");
    scanf("%s",&SrcName);

    printf("Enter the name of new encrypted file\n");
    scanf("%s",&DestName);

    printf("Enter key for encrption \n");
    scanf(" %c",&key);

    Encrypt_XOR_Cipher(SrcName,DestName,key);

    return 0;
}
