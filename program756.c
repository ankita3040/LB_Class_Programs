#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iRow);

    printf("Enter number of column\n");
    scanf("%d",&iCol);

    //Worst way of programming
    int Arr[iRow][iCol];
    
    return 0;
}