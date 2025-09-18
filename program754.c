
// Disarium Number
// Input : 135
// Output : 1^1 + 3^2 + 5^3
//          1 + 9 + 125
//          135
//          true

#include<stdio.h>
#include<stdbool.h>

int power(int A, int B) //A^B
{
    int i = 0, Result = 1;

    for(i =1; i<=B; i++)
    {
        Result = Result * A;
    }

    return Result;

}

int CountDigits(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    { 
        iCount++;
        iNo = iNo /10;
    }

    return iCount;
    
}

bool CheckDisarium(int iNo)
{
    int iDigit = 0,iSum = 0, iTemp = iNo, iCount = 0;

    iCount = CountDigits(iNo);
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum +power(iDigit,iCount);
        iCount--;
        iNo = iNo /10;
    }

    if(iTemp == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter  number \n");
    scanf("%d",&iValue);
   
    bRet = CheckDisarium (iValue);

    if(bRet == true)
    {
        printf("%d is disarium number\n", iValue);
    }
    else
    {
        printf("%d is not disarium number\n", iValue);
    }

    return 0;
}