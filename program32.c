#include<stdio.h>

#define ERR_INVALID -1

//Imput : 5
//Output : 1*2*3*4*5 = 120

int main()
{
    unsigned int iValue = 0;
    unsigned long  iRet = 0;

    printf("Enter number to get Factorial of that number\n ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input \n");
    }
    else
    {
        printf("Factorial of number is %lu\n",iRet);
    }
}

unsigned long Factorial(unsigned int iNo) 
{
    int iCnt = 0;
    unsigned long  iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = iNo; iCnt >= 1 ;iCnt--)
    {
        iFact = iFact * iCnt;
    }
     
    return iFact;
}
