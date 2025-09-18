///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Display Hello on output screen 
// Autor       :  Ankita Anil Patil
// Date        :  05/05/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//Iteration

int Calculate (iNo)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n" );
    scanf("%d",&iValue);

    iRet=Calculate(iValue);
    printf("Sum is : %d\n",iRet);

    return 0;
}