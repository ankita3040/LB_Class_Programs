#include<iostream>
using namespace std;

int Maximum(int No1, int No2, int No3)
{

    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No3) && (No2 > No3))
    {
        return No2;
    }
    else
    {
       return No3;
    }


}

int main()
{
  
    cout<<Maximum(11,18,27)<<"\n";
    cout<<Maximum(13,78,33)<<"\n";

    return 0;
}