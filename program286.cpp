
/*
    Input : 
    Output: 

    input : 
    output : 
*/

#include<iostream>
#include<iostream>
using namespace std;


//bit check and multiple bit off on -off| off-off

typedef unsigned int UINT;

UINT OffBitMultiple( UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;
    UINT iResult = 0 ;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iMask = (iMask1 & iMask2);

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    int iRet = 0;
    
    cout<<"Enter number \n";
    cin>>iValue;   
    
    cout<<"Enter position1 \n";
    cin>>iLocation1; 

    cout<<"Enter position2 \n";
    cin>>iLocation2; 

    iRet = OffBitMultiple(iValue,iLocation1,iLocation2);

    cout<<"Update number is "<<iRet<<'\n';
   
    return 0;
}