#include<iostream>
using namespace std;



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
    
    delete []ptr;

    return 0;
}