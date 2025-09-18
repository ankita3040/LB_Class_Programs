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
    int a = 10, b = 20, Ret = 0; 

    Ret = Addition(a,b); // you are passing value of a and b
    cout<<"Addition :"<<Ret<<'\n';
    return 0;
}