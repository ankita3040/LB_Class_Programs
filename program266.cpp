#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iBin = 0,iCount = 0;

   
    while (iNo != 0)
    {
       iBin = iNo % 2;
       iCount = iCount +iBin;

       cout<<iBin;
       iNo = iNo / 2;
    }

    cout<<endl; 
    
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;;
    

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Count of 1 is :"<<iRet<<'\n';

    return 0;
}