#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether number is divible by 3 and 5 \n ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if (bRet == true)
    {
        printf("%d is divible by 3 and 5",iValue);
    }
    else
    {
        printf("%d number is not 3 or 5",iValue);
    }

   return 0; 
}

bool CheckDivisible(int iNo) 
{
    bool bResult = false;
    if(((iNo % 5) && (iNo % 3 )) == 0)
    {
       bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult;
}