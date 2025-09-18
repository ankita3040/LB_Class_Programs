
// Harshad/ Niven Number

// Input : 18
//Output : 1+8 -> 9 
//          18 % 9 == 0
//          true

#include<stdio.h>
#include<stdbool.h>

bool CheckNiven(int iNo)
{
    int iDigit = 0, iSum = 0, iTemp = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
    }

    return((iTemp % iSum) == 0);

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter  number \n");
    scanf("%d",&iValue);
   
    bRet = CheckNiven (iValue);

    if(bRet == true)
    {
        printf("%d is Niven number\n", iValue);
    }
    else
    {
        printf("%d is not Niven number\n", iValue);
    }

    return 0;
}