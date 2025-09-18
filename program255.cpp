#include<iostream>
using namespace std;

template <class T> // template header

T Maximum(T No1, T No2, T No3)
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
  
    cout<<Maximum(11.20,18.30,27.45)<<"\n";
    cout<<Maximum(13,34,50)<<"\n";
    cout<<Maximum(12.30f,46.90f,90.20f)<<"\n";

    return 0;
}