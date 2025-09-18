#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if (bRet == true)
    {
        printf("%d is divible by 5",iValue);
    }
    else
    {
        printf("%d number is not divible ",iValue);
    }

   return 0; 
}

bool CheckDivisible(int iNo) 
{
    bool bResult = false;
    if((iNo % 5 ) == 0)
    {
       bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult;
}