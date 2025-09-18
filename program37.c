#include<stdio.h>

void EvenDisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; //Updater
    }
    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0 && iNo % 2 == 0)
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

    EvenDisplayFactor(iValue);

    return 0;
}