#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[], int iSize)
{
    int i, iSum = 0;
 
    for(i = 0; i < iSize; i++)
    {
       if((Arr[i] % 2) != 0)
       {
         iSum = iSum + Arr[i];
       }
    }
    return iSum;

}


int main()
{
    int iLength = 0, iCnt =0, iRet = 0;
    int *ptr = NULL;
   
    printf("Enter number of elements \n");
    scanf("%d",&iLength);
     // step 1: Allocate the memory
    ptr = (int *) malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    
    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = SumOdd(ptr,iLength);

    printf("Summation of odd elements is  :  %d\n",iRet);


    // step 2 : use the memory
    //use
    
    //step 3 : free the memory
    free(ptr);


    
    return 0;
}