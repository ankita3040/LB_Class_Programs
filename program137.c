#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        if(Arr[iCnt] == iNo )
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
   
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0, iCnt = 0;
    bool bRet = false;

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

    printf("\nEnter the value that you want search\n");
    scanf("%d",&iValue);

    bRet = Search(iPtr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in array \n",iValue);
    }
    else
    {
        printf("%d is not present in array \n",iValue);
    }
    

    free(iPtr);

    return 0;
}