#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> // universal standard 
#include<string.h>
    
int main()
{
    char fName[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter filename that you want to open \n");
    scanf("%s",fName);

    fd = open(fName,O_WRONLY | O_APPEND); // Change

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written successfully\n",iRet);

        close(fd);
    }
    
    return 0;
}