#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>
   
#define BUFFER_SIZE 1024

int main()
{
    char fName[20] = {'\0'};
    int fd = 0, iRet = 0, iSum = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter filename that you want to open \n");
    scanf("%s",fName);

    fd = open(fName,  O_RDONLY ); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else // change
    {
        printf("File is successfully opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            //printf("%s",Buffer);
           // write(1,Buffer,iRet);
            //memset(Buffer,'\0',BUFFER_SIZE0);

            iSum = iSum + iRet;
        }
        
        printf("File size is : %d bytes\n",iSum);

        close(fd);
    }
    
    return 0;
}