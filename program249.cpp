#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Value1 , Value2;
    int Ret;

    cout<<"Enter first number :\n";
    cin>>Value1;

    cout<<"Enter second number :\n";
    cin>>Value2;

    Ret = Addition(Value1,Value2);

    cout<<"Addition : "<<Ret<<"\n";
    
    return 0;
}