#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd= 0; 

    char fName[20] = {'\0'};
    
    printf("Enter the name of file \n");
    scanf("%s",&fName);

    fd = creat(fName,0777);
    return 0;
}