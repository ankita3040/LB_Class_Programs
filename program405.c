#include<stdio.h>

int Factorial(int iNo)
{
    
  static int  Fact = 1;
  
  if(iNo > 1)
  {
    Fact = Fact * iNo;

    Factorial(iNo--);
  }

  return Fact;
  
}

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet =  Factorial(iValue);

    printf("Factorial is %d \n",iRet);
    return 0;
}
    

