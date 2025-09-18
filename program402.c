#include<stdio.h>

int Factorial(int iNo)
{
    
  int  Fact = 1;
  int i = 1;

  while(i <= iNo)
  {
    Fact = Fact * i;
    i++;
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
    

