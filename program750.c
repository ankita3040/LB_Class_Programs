
/*
    Enter end point of number
    500000000
    1
    2
    145
    40585
*/

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

void CheckStrongRange(int iEnd)
{

    int i = 0;
    bool bFlag = false;

    for(i = 1; i <= iEnd; i++ )
    {
        bFlag = CheckStrong(i);
        if(bFlag == true)
        {
            printf("%d \n",i);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter end point of number \n");
    scanf("%d",&iValue);
   
    CheckStrongRange(iValue);

    return 0;
}