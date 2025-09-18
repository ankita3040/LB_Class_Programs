/*
    Elements of matrix are :
    7       3       4       1
    3       12      9       5
    5       5       8       3
    2       10      8       3
    Rich Neighbour Elements are :
    4
    12
    8
    10


*/

#include<stdio.h>
#include<stdlib.h>
//#include<limit.h> // new

typedef int * IPTR;
typedef int ** IPPTR;

void Accept(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    printf("Enter the elements:\n");

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           scanf("%d",&Arr[i][j]); 
        }
    }
}

void Display(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    printf("Elements of matrix are : \n");

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           printf("%d\t",Arr[i][j]); 
        }

        printf("\n");
    }
}

void DisplayNeighbour(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    
    printf("Elements are :\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(j != 0 || j != iCol -1)
            {
                if(Arr[i][j] == (Arr[i][j-1] + Arr[i][j+1]))
                {
                    printf("%d\n",Arr[i][j]);
                }

            } 
        }

       
    }


}

int Summation(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0, iSum = 0;
    
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           iSum = iSum + Arr[i][j]; 
        }

    }

    return iSum;

}

int Maximum(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0, iMax = 0;
    
   // iMax = INT_MIN;                 // defines minimum value of int 
    iMax = Arr[0][0];
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
            
        }

    }

    return iMax;

}

void MaxRow(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0, iMax = 0;
    
   // iMax = INT_MIN;                 // defines minimum value of int 
    iMax = Arr[0][0];
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            } 
        }

         printf("Maximum element from row no %d is %d\n", i+1,iMax);
        iMax = Arr[0][0];
    }


}

int EvenRowSummation(IPPTR Arr, int iRow, int iCol) // // O(N^2)
{
    int i = 0, j = 0, iSum = 0;
    
    for(i = 0; i < iRow; i++)
    {
        
        for(j = 0; j < iCol; j++)
        { 
            if((i % 2) != 0)
            {       
                iSum = iSum + Arr[i][j];  
            }
        }

    }

    return iSum;

}



int Minimum(IPPTR Arr, int iRow, int iCol)
{
    int i = 0, j = 0, iMin = 0;
    
   // iMin = INT_MIN;                 // defines minimum value of int 
    iMin = Arr[0][0];
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] < iMin)
            {
                iMin = Arr[i][j];
            }
            
        }

    }

    return iMin;

}

void MaximumMinimum(IPPTR Arr, int iRow, int iCol)      //TimeComplexity -N^2
{
    int i = 0, j = 0, iMax = 0, iMin = 0;
    
   // iMax = INT_MIN;                 // defines minimum value of int 
   // iMin = INT_MIN;
    iMax = Arr[0][0];
    iMin = Arr[0][0];
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
            
            if(Arr[i][j] < iMin)
            {
                iMin = Arr[i][j];
            }
            
        }

    }

    printf("Maximum elements is : %d\n", iMax);
    printf("Minimum elements is : %d\n", iMin);

}


int SummationBorder(IPPTR Arr, int iRow, int iCol)
{
       int i = 0, j = 0, iSum = 0;
    
   
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == 0 || i == iRow -1 || j == 0 || j == iCol -1)
            {
                iSum = iSum + Arr[i][j];
            }
            
        }

    }

    return iSum;

}
int main()
{
    
    int iRow = 0, iCol = 0, i = 0, j = 0, iRet  = 0;
    IPPTR Arr = NULL;

    printf("Enter number of  rows: \n");
    scanf("%d",&iRow);

    printf("Enter number of cols : \n");
    scanf("%d",&iCol);

    Arr = (IPPTR) malloc (sizeof(IPTR) * iRow);

    for(i = 0; i < iRow; i++)
    {
        Arr[i] = (IPTR) malloc (sizeof(int) * iCol);
    }

    Accept(Arr,iRow,iCol);
    Display(Arr,iRow,iCol);


    DisplayNeighbour(Arr,iRow,iCol);
    //Deallocate memory of matrix

    for(i = 0; i < iRow; i++)   //deallocate columns
    {
        free(Arr[i]);
    }

    free(Arr);
   
    return 0;
}