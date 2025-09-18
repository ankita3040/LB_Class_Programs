#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
    
        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements ";

            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }

        }

        void Display()
        {
            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }

            cout<<"\n";
        }
};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();
    return 0;
}