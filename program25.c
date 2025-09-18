#include<stdio.h>

//Imput : 5
//Output : 1+2+3+4+5 = 15

int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number to get summation of that number\n ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation of number is %d\n",iRet);
}

int Summation(int iNo) 
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        iSum = iSum + iCnt;
    }
     
    return iSum;
}
