// Input : 4
// Output: * * * *

/*
    start 
        Accept the frequency
        Iteratate from 1 to that frequency
            Display * on screen
        continue
    stop
*/
// Time complexity O(N)
//N is a natural number
// Where N >= 0 and N <= Infinity

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter frequency :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}