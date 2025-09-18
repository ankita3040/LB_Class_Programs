///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Used to calculate percentage
// Autor       :  Ankita Anil Patil
// Date        :  28/04/2025
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int Total =0;
    int obtained =0;
    float percentage=0.0f;

    printf("Enter your Total marks : ");
    scanf("%d",&Total);
    
    printf("Enter your obtained marks :");
    scanf("%d",&obtained);

    percentage = ( (float) obtained / (float) Total ) * 100;
    printf("Percentage is : %f\n",percentage);
    return 0;
}