#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i;
    printf("Array elements are : \n");
    for(i = 0; i < iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }

}


int main()
{
    int iLength = 0, iCnt =0;
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

    Display(ptr,iLength);


    // step 2 : use the memory
    //use
    
    //step 3 : free the memory
    free(ptr);


    
    return 0;
}