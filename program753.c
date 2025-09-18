
// Magic Number
// Input :19
// Output : 19  -> 10 -> 1+0 -> 1
//          true

#include<stdio.h>
#include<stdbool.h>

bool CheckMagic(int iNo)
{
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

    return(iSum == 1);

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter  number \n");
    scanf("%d",&iValue);
   
    bRet = CheckMagic (iValue);

    if(bRet == true)
    {
        printf("%d is magic number\n", iValue);
    }
    else
    {
        printf("%d is not magic number\n", iValue);
    }

    return 0;
}