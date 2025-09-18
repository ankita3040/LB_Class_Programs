#include<stdio.h>

int SumDigit(int iNo)
{
    
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit; 
        iNo = iNo / 10;  
    }

    return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summation of digit  %d:",iRet);

    return 0;
}