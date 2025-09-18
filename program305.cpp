#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength = 5) // parameterized constrcutor with default value
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside desctructor\n";
            delete[] Arr;
        }
};


int main()
{
    ArrayX aobj1(); // array of 5
    ArrayX aobj2(10);// array 0f 10

  

    return 0;
}