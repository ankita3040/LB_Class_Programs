#include<iostream>
using namespace std;

float Addition(float No1, float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float Value1 , Value2, Ret;

    cout<<"Enter first number :\n";
    cin>>Value1;

    cout<<"Enter second number :\n";
    cin>>Value2;

    Ret = Addition(Value1,Value2);

    cout<<"Addition : "<<Ret<<"\n";
    
    return 0;
}