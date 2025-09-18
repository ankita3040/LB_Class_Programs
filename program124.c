#include<stdio.h>
#include<stdlib.h>



int main()
{
    int iLength = 0;
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
    // step 2 : use the memory
    //use
    
    //step 3 : free the memory
    free(ptr);


    
    return 0;
}