#include<stdio.h>

int Factorial()
{
    
    static int sum = 1;
    static int i = 1;

    if(i <= 5)
    {
        sum = sum * i;
        i++;
        Factorial();
    }
    
    return sum;
  
}

int main()
{
    int iRet = 0;

    iRet =  Factorial();

    printf("Factorial is %d \n",iRet);
    return 0;
}
    

