#include<iostream>
#include<iostream>
using namespace std;

//bit check n  off the bit 

typedef unsigned int UINT;

UINT ChageBit( UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0 ;

    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    iResult = iNo & iMask;

   return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    int iRet = 0;
    
    cout<<"Enter number \n";
    cin>>iValue;    

    cout<<"Enter position \n";
    cin>>iLocation;    


    iRet = ChageBit(iValue,iLocation);

    cout<<"Updated number is "<<iRet<<'\n';
   
    return 0;
}