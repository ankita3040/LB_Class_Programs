#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd= 0; 

    char fName[20] = {'\0'};
    
    printf("Enter the name of file that you want to open \n");
    scanf("%s",&fName);

    // O_RONLY
    // W_wONLY
    // O_RDWR
    fd = open(fName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
   
    printf("File is successfully created with FD %d \n",fd);

    return 0;
}