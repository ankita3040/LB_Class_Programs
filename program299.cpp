#include<iostream>
using namespace std;

// call by reference
template <class T>
void Swap(T &No1, T &No2)
{
    T temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;

}
int main()
{
    int a = 10, b = 20;

    cout<<"before swap Value of a :"<<a<<'\n';
    cout<<"before swap Value of b :"<<b<<'\n';

    Swap(a,b);

    cout<<"Value of a :"<<a<<'\n';
    cout<<"Value of b :"<<b<<'\n';

    char p = 'A', q = 'B'; 

    cout<<"before swap Value of p :"<<p<<'\n';
    cout<<"before swap Value of q :"<<q<<'\n';

    Swap(p,q);

    cout<<"Value of p :"<<p<<'\n';
    cout<<"Value of q:"<<q<<'\n';


    
    return 0;
}