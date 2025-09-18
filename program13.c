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

    for(iCnt = 1; iCnt <= 5; iCnt++ )
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter Value to be display :\n" );
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}