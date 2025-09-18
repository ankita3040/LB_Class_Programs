#include<iostream>
using namespace std;

void Display(int Arr[], int iLength)
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

    int *ptr = new int [Size];

    cout<<"Enter array elements \n";
   
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Display(ptr,Size);

    delete []ptr;

    return 0;
}