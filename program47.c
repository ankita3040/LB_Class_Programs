#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo  = iNo / 10;
        iCnt++;
        
    }

    return iCnt;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("Number of Digit are : %d\n",iRet);

    return 0;
}