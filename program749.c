// Accept number check where the number is piterson/strong/Krishanmurthy or not
// Summation of factorial of each digit;
// 145 -> 120(5!) + 24(4!) +  1(1!)  

#include<stdio.h>
#include<stdbool.h>

bool CheckStrong(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iSum = 0, iTemp = 0;

    iTemp = iNo;

    int Factorial[10] = {1,1,2,6,24,120,720,5040,40320,362880};
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Factorial[iDigit];
        iNo = iNo /10;

    }
    
   return(iTemp == iSum);
 
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter Numner :\n");
    scanf("%d",&iValue);

    bRet = CheckStrong(iValue);

   if(bRet == true)
   {
        printf("%d is Strong number\n", iValue);
   }
   else
   {
        printf("%d is not Strong number\n",iValue);
   }

    return 0;
}