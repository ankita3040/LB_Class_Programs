// Problem od digit 
// Input : 9875
// Output : 9+8+7+5 = 29 -> 2 + 9 = 11 -> 1+1 = 2 (Generic Root /Digital Root)

// Input : 21
// OUTPUT : 3

// Input : 7
// Output : 7

#include<stdio.h>

int GenericRoot(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    int iSum = 0;

    iSum = iNo;

    while(iSum > 9)
    {
        iNo = iSum;
        iSum = 0;

        while( iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iDigit + iSum;
            iNo = iNo / 10;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Numner :\n");
    scanf("%d",&iValue);

    iRet = GenericRoot(iValue);

    printf("Gnereic root of % d is : %d \n", iValue, iRet);

    return 0;
}