#include<iostream>
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit( UINT iNo)
{

    UINT iMask = 4294967231; // 7th position
    UINT iResult = 0 ;

   iResult = iNo & iMask;

   return iResult;
}

int main()
{
    UINT iValue = 0 , iRet = 0;
    bool bRet = false;
    
    cout<<"Enter number \n";
    cin>>iValue;    

    iRet = ChangeBit(iValue);

    cout<<"Updated number is "<<iRet<<'\n';
  

    return 0;
}