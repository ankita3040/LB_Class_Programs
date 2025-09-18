#include<stdio.h>
#include<stdlib.h>


void MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0;
    

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invlaid input");
        return -1;
    }
    
    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        
    }
     
   

    printf("Maximum element is %d\n",iMax);
    printf("Minimun element is %d\n",iMin);

   
   
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0;
    
    printf("Enter number of elements :\n ");
    scanf("%d",&iLength);

    iPtr =(int *) malloc(iLength *sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to aalocate memory");
        return -1;
    }

    printf("Enter array elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the number %d: ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    MaximumMinimum(iPtr,iLength);

    free(iPtr);

    return 0;
}

//TC O(N)