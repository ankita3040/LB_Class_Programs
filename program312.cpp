#include<iostream>
using namespace std;

template<class T>

class ArrayX
{
    private:
        T   *Arr;
        int iSize;

    public:
        ArrayX(int iLength = 5) 
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new T[iSize];
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


        T Maximum()
        {   
            T iMax = 0.0f;
            int iCnt = 0;

            iMax = Arr[0];

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iMax)
                {
                    iMax = Arr[iCnt];
                }
            }

            return iMax;
        }
};

int main()
{
    
    ArrayX <int>aobj(5);
    
    aobj.Accept();
    aobj.Display(); 
    
    int iRet = 0;
    fRet = aobj.Maximum();

    cout<<"Maximum is :"<<iRet<<'\n';
    
    
    return 0;
}