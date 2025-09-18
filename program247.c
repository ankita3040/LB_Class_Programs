#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>
   
#define BUFFER_SIZE 1024

int main()
{
    char fName[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0, iCount = 0;
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
          
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCount++;
                }

            }
            memset(Buffer,'\0',BUFFER_SIZE);
           
        }

        printf("Number of capital charcter are %d \n",iCount);
                
    
    close(fd);

    }
    
    return 0;
}