7#include<stdio.h>

int Summation(int ptr[], int iSize)
{
    int iCnt = 0, iSum =0;
    printf("Summation of array is\n");
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + ptr[iCnt];
    }

    return iSum;
   

}

int main()
{
    int Arr[5];
    int iCnt = 0, iRet = 0;

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Summation(Arr,5); 
    printf("%d\n",iRet);  
    return 0;
}