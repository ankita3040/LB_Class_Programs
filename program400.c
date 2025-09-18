#include<stdio.h>

int Addition()
{
    
    static int sum = 0;
    static int i = 1;

    if(i <= 5)
    {
        sum = sum + i;
        i++;
        Addition();
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
    

