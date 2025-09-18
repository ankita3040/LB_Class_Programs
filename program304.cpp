#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength)
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize]; // stored in heap
        }

        ~ArrayX()
        {
            cout<<"Inside desctructor\n";
            delete[] Arr;
        }
};


int main()
{
    ArrayX obj(5);// objecr of auto storage class created // storage in stack
  

    return 0;
}