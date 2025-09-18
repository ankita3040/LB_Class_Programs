///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Display Hello on output screen 
// Autor       :  Ankita Anil Patil
// Date        :  05/05/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//Iteration

void Display()
{
    int iCnt=0;

    for(iCnt = 1; iCnt <= 4; iCnt++ )
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    Display();

    return 0;
}