#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("%d number is Even",iValue);
    }
    else
    {
        printf("%d number is Odd",iValue);
    }

   return 0; 
}

bool CheckEven(int iNo) 
{
    if((iNo % 2 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}