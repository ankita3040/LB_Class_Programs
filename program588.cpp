#include<iostream>
using namespace std;

class ArrayX            
{
    public:
        int *Arr;
        int iSize;
        bool Sorted;
    
        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
            Sorted = true;
        }

        ~ArrayX()
        {
            delete Arr;
        }

        void Accept()
        {
            cout<<"Enter "<<iSize<<"elemnts :\n";

            int i = 0;           

            for(i = 0; i < iSize; i++)
            {
                cout<<"Enter element no "<<i +1<<"\n";
                if((i > 0 ) && (Sorted == true))         
                {
                    if(Arr[i] < Arr[i -1 ])
                    {
                        Sorted = false;
                    }
                }
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
    int iLength = 0, iValue = 0;

    cout<<"Enter the size of array : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);
   

    aobj->Accept();
    aobj->Display();

   

    delete aobj;    
    
    return 0;
}