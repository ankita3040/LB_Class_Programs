#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iBin = 0;

    cout<<"Binary conversion is :\n";
    while (iNo != 0)
    {
       iBin = iNo % 2;
       cout<<iBin;
       iNo = iNo / 2;
    }

    cout<<endl;  
}

int main()
{
    int iValue = 0;
    

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}