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
    bool bResult = false;
    if((iNo % 2 ) == 0)
    {
       bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult;
}