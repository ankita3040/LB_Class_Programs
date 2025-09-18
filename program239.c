#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>
    
int main()
{
    char fName[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[10] = {'\0'};

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

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
        }
        printf("\n");

        close(fd);
    }
    
    return 0;
}