#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
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

        void Accept()
        {
            cout<<"Enter the elments\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elments of the array are \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<'\n';
            }
        }
};

int main()
{
    ArrayX aobj(5);
    
    aobj.Accept();
    aobj.Display(); 
    
    return 0;
}