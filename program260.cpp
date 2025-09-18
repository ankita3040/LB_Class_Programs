#include<iostream>
using namespace std;

//template instantiasion -> while compiling program  generic to specific called -> 
template <class T>

void Display(T Arr[], int iLength)
{
    int iCnt = 0;

    cout<<"Array elements are \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<< Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size, iCnt;

    cout<<"Enter number of many elements : \n";
    cin>>Size;

    float *ptr = new float[Size];

    cout<<"Enter array elements \n";
   
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Display(ptr,Size);

    delete []ptr;

    return 0;
}