#include<iostream>
using namespace std;

// call by reference
// this will work fast
// reference is 0 byte in swap 

void Swap(int &No1, int &No2) // & is reference not address No1. nickname of a ,no2 is nixk name of b
{
    int temp = 0;

    temp = No1; // a
    No1 = No2; // b
    No2 = temp;

}
int main()
{
    int a = 10, b = 20, Ret = 0; 

    Swap(a,b); // you are passing a b name 

    cout<<"Value of a :"<<a<<'\n';
    cout<<"Value of b :"<<b<<'\n';

    
    return 0;
}