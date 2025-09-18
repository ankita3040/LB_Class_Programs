#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> // universal standard 

int main()
{
    char fName[20] = {'\0'};
    int fd = 0;

    printf("Enter filename that you want to open \n");
    scanf("%s",fName);

    fd = open(fName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
    }

    close(fd);



    return 0;
}