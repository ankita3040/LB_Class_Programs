#include<stdio.h>

void Display(int ptr[], int iSize)
{
    int iCnt = 0;
    printf("Elments of array are \n");
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
   
  
  

}

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr,5);   
    return 0;
}