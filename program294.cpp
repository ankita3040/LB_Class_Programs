#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;
    return Ans;

}
int main()
{
    int a = 10, b = 20, Ret = 0; 

    Ret = Addition(a,b);
    cout<<"Addition :"<<Ret<<'\n';

    double x = 10.20, y = 20.30, Ret2 = 0; 

    Ret2 = Addition(x,y);
    cout<<"Addition :"<<Ret2<<'\n';

    
    return 0;
}