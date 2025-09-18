///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Used to calculate percentage
// Autor       :  Ankita Anil Patil
// Date        :  28/04/2025
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int Total =400;
    int Obtained =200;
    float percentage=0.0f;
    percentage = ( (float) Obtained / (float) Total ) * 100;
    printf("Percentage is : %f\n",percentage);
    return 0;
}