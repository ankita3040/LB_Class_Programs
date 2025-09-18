///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Display Hello on output screen 
// Autor       :  Ankita Anil Patil
// Date        :  05/05/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}