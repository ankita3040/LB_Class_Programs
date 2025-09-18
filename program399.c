#include<stdio.h>

int Addition()
{
    
    int sum = 0;
    int i = 1;

    while(i <= 3)
    {
        sum = sum + i;
        i++;
    }

    return sum;
  
}

int main()
{
    int iRet = 0;

    iRet =  Addition();

    printf("Addition is %d \n",iRet);
    return 0;
}
    

