
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Display Hello on output screen 
// Autor       :  Ankita Anil Patil
// Date        :  05/05/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//Iteration

void Display(iNo)
{
    int iCnt=0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        printf(" %d \n",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the frequency:\n" );
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}