#include<iostream>
using namespace std;

//template instantiasion -> while compiling program  generic to specific called -> 

float Summation(float Arr[], int iLength)
{
    int iCnt, Sum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size, iCnt;
    float Ret = 0.0f;

    cout<<"Enter number of many elements : \n";
    cin>>Size;

    float *ptr = new float[Size];

    cout<<"Enter array elements \n";
   
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Ret = Summation(ptr,Size);

    cout<<"Summation is : "<<Ret<<"\n";

    delete []ptr;

    return 0;
}