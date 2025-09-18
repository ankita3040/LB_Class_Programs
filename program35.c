#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; //Updater
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++) // to reduce TC we did iNo/2
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }

    }

}

int main()
{
    int iValue = 0;

    printf("Enter number to get factor ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}