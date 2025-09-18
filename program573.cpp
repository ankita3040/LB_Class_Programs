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

            for(i = 1; i < iSize; i++)
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

        bool LinearSearch(int no)
        {
            int i = 0;
            bool bFlag = false;

        for(i = 0; i < iSize; i++)
        {
            if(Arr[i] ==no)
            {
                bFlag = true;
                break;
            }
        }

        return bFlag;
        }
};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    bool bRet = false;

    bRet = aobj.LinearSearch(20);

    if(bRet == true)
    {
        cout<<"Element is present"<<"\n";
    }
    else
    {
        cout<<"Elment is not present"<<'\n';
    }
    return 0;
}