#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize)
{
    int i, iSum = 0 , iNo  = 11;
 
    for(i = 0; i < iSize; i++)
    {
      if(Arr[i] == iNo)
      {
        break;
      } 
    }
    if(i == iSize)
    {
        return false;
    }    
    else
    {
        return true;
    }

}


int main()
{
    int iLength = 0, iCnt =0, bRet = false;
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

    bRet = Search(ptr,iLength);

    if(bRet == true)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }
   


    // step 2 : use the memory
    //use
    
    //step 3 : free the memory
    free(ptr);


    
    return 0;
}