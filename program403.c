#include<stdio.h>

int Factorial(int iNo)
{
    
  static int  Fact = 1;
  static int i = 1;

  if(i <= iNo)
  {
    Fact = Fact * i;
    i++;

    Factorial(iNo);
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
    

