#include<stdio.h>

//Imput : 5
//Output : 1*2*3*4*5 = 120

int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number to get Factorial of that number\n ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n",iRet);
}

int Factorial(int iNo) 
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
    }
     
    return iFact;
}
