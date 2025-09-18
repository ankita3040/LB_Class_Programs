#include<stdio.h>

void DisplayFactorNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; //Updater
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("Factor is:%d\n",iCnt);
        }
        else
        {
            printf("Non Factor is:%d\n",iCnt);
        }

    }

}

int main()
{
    int iValue = 0;

    printf("Enter number to get factor ");
    scanf("%d",&iValue);

    DisplayFactorNonFactors(iValue);

    return 0;
}