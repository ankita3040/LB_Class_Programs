
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////
//
//  Class :      QueueX
//  Description: Generic implentation of queue
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////


template<class T>

struct Queuenode
{
    int data;
    struct Queuenode *next;
    
};

template<class T>
class QueueX
{
    private:
        struct Queuenode<T> *first;
        int iCount;
    public:
    QueueX();
      void enqueue(T);
      T dequeue();
      void display();
      int Count();

};

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	QueueX  
//	Function Author			:	Ankita Patil
//	Parameters:				: NONE
//	Description:
//		This is constructor of class Singly_linkedList
//
//	Returns					: NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
QueueX<T> :: QueueX()
{
    this->first = NULL;
    this->iCount = 0;

}


///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	enqueue
//	Function Author			:	Ankita Patil
//	Parameters:				:  
//      [IN] T no
//	Description:
//		This is enqueue function which will insert element
//
//	Returns					: NONE
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
void QueueX<T> ::  enqueue(T no) // InsertLast
{
    struct Queuenode<T> * newn = NULL;
    struct Queuenode<T> *temp = NULL;
    newn = new struct Queuenode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
   
    iCount++;

}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	dequeue
//	Function Author			:	Ankita Patil
//	Parameters:				:   None
//      
//	Description:
//		This is dequeue function which will delete element
//
//	Returns					: T ( It will return data of which is deleted)
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
T QueueX<T> :: dequeue()    // Deletefirst
{
    struct Queuenode<T> *temp;
    T value ;

    if(first == NULL)
    {
        cout<<"Unable pop queue is empty";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;

    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	display
//	Function Author			:	Ankita Patil
//	Parameters:				:   None
//      
//	Description:
//		This is display function which will display all elements of queue
//
//	Returns					:  None
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void QueueX<T> ::  display()
{
    struct Queuenode<T> *temp = NULL;
    temp = first;

    while(temp  != NULL)
    {
        cout<<"|"<<temp->data<<"|-";
        temp = temp->next;
    }

    cout<<"\n";

}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Author			:	Ankita Patil
//	Parameters:				:   None
//      
//	Description:
//		This is Count function which will return count of elements in queue
//
//	Returns					:  
//      int
//      Number of nodes in generic queue      
//
///////////////////////////////////////////////////////////////////////////////////////////
template<class T>
int QueueX<T> ::  Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////////////////////
//
//  Class :      StackX
//  Description: Generic implentation of stack
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////



template<class T>

struct Stacknode
{
    T data;
    struct Stacknode<T> *next;
    
};

template<class T>
class StackX
{
    private:
        struct Stacknode<T> *first;
        int iCount;
    public:
      StackX();
      void push(T);
      T pop();
      void display();
      int Count();

};

template<class T>
StackX<T> :: StackX()
{
    this->first = NULL;
    this->iCount = 0;

}

template<class T>
void StackX<T> ::  push(T no) // InsertFirst
{
    struct Stacknode<T> * newn = NULL;
    newn = new struct Stacknode<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first= newn;

    iCount++;


}

template<class T>
T StackX<T> ::  pop()    // Deletefirst
{
    struct Stacknode<T> *temp;
    T value ;

    if(first == NULL)
    {
        cout<<"Unable pop stack is empty";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first->next;
        delete temp;

        iCount--;

        return value;
    }
}

template<class T>
void StackX<T> ::  display()
{
    struct Stacknode<T> *temp = NULL;
    temp = first;

    while(temp  != NULL)
    {
        cout<<"|"<<temp->data<<"|"<<"\n";
        temp = temp->next;
    }

}

template<class T>
int StackX<T> ::  Count()
{
    return iCount;
}


////////////////////////////////////////////////////////////////////////////
//
//  Class :      SinglyLLL
//  Description: Generic implentation of Singly linear linked list
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////

template <class T>
struct SinglyLLLnode
{
    T data;
    struct SinglyLLLnode<T>* next;
};

template <class T>
class SinglyLLL
{
private:
    struct SinglyLLLnode<T>* first;
    int iCount;

public:
    SinglyLLL();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    void Display();
    int Count();

    int SearchFirstOcc(T);
    int SearchLastOcc(T);
    int Frequency(T);

    T Addition();
    T Maximum();
    T Minimum();
    T SecMaximum();

    void DisplayPerfect();
    void DisplayPrime();
    int AdditionEven();
    void SumDigit();
    void ReverseData();
    void DisplayProductDigit();
    void DisplaySmallDigit();
    void DisplayLargeDigit();
    void ReverseLinkedList();
};

// constructor
template <class T>
SinglyLLL<T>::SinglyLLL()
{
    first = NULL;
    iCount = 0;
}

// InsertFirst
template <class T>
void SinglyLLL<T>::InsertFirst(T no)
{
    SinglyLLLnode<T>* newn = new SinglyLLLnode<T>;
    newn->data = no;
    newn->next = first;

    first = newn;
    iCount++;
}

// InsertLast
template <class T>
void SinglyLLL<T>::InsertLast(T no)
{
    SinglyLLLnode<T>* newn = new SinglyLLLnode<T>;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        SinglyLLLnode<T>* temp = first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

// InsertAtPos
template <class T>
void SinglyLLL<T>::InsertAtPos(T no, int ipos)
{
    if(ipos < 1 || ipos > iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        SinglyLLLnode<T>* newn = new SinglyLLLnode<T>;
        newn->data = no;

        SinglyLLLnode<T>* temp = first;
        for(int i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

// DeleteFirst
template <class T>
void SinglyLLL<T>::DeleteFirst()
{
    if(first == NULL)
        return;

    SinglyLLLnode<T>* temp = first;
    first = first->next;
    delete temp;
    iCount--;
}

// DeleteLast
template <class T>
void SinglyLLL<T>::DeleteLast()
{
    if(first == NULL)
        return;

    if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        SinglyLLLnode<T>* temp = first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

// DeleteAtPos
template <class T>
void SinglyLLL<T>::DeleteAtPos(int ipos)
{
    if(ipos < 1 || ipos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        SinglyLLLnode<T>* temp = first;
        for(int i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        SinglyLLLnode<T>* targ = temp->next;
        temp->next = targ->next;
        delete targ;
        iCount--;
    }
}

// Display
template <class T>
void SinglyLLL<T>::Display()
{
    cout<<"Linked List : ";
    SinglyLLLnode<T>* temp = first;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"\n";
}

// Count
template <class T>
int SinglyLLL<T>::Count()
{
    return iCount;
}

// SearchFirstOcc
template <class T>
int SinglyLLL<T>::SearchFirstOcc(T no)
{
    SinglyLLLnode<T>* temp = first;
    int pos = 1;
    while(temp != NULL)
    {
        if(temp->data == no)
            return pos;
        pos++;
        temp = temp->next;
    }
    return -1;
}

// SearchLastOcc
template <class T>
int SinglyLLL<T>::SearchLastOcc(T no)
{
    SinglyLLLnode<T>* temp = first;
    int pos = 1, lastPos = -1;
    while(temp != NULL)
    {
        if(temp->data == no)
            lastPos = pos;
        pos++;
        temp = temp->next;
    }
    return lastPos;
}

// Frequency
template <class T>
int SinglyLLL<T>::Frequency(T no)
{
    SinglyLLLnode<T>* temp = first;
    int cnt = 0;
    while(temp != NULL)
    {
        if(temp->data == no)
            cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Addition
template <class T>
T SinglyLLL<T>::Addition()
{
    SinglyLLLnode<T>* temp = first;
    T sum = 0;
    while(temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

// Maximum
template <class T>
T SinglyLLL<T>::Maximum()
{
    SinglyLLLnode<T>* temp = first;
    T max = temp->data;
    while(temp != NULL)
    {
        if(temp->data > max)
            max = temp->data;
        temp = temp->next;
    }
    return max;
}

// Minimum
template <class T>
T SinglyLLL<T>::Minimum()
{
    SinglyLLLnode<T>* temp = first;
    T min = temp->data;
    while(temp != NULL)
    {
        if(temp->data < min)
            min = temp->data;
        temp = temp->next;
    }
    return min;
}

// SecMaximum
template <class T>
T SinglyLLL<T>::SecMaximum()
{
    if(first == NULL || first->next == NULL)
        return -1;

    T max1 = first->data, max2 = first->data;
    SinglyLLLnode<T>* temp = first;
    while(temp != NULL)
    {
        if(temp->data > max1)
        {
            max2 = max1;
            max1 = temp->data;
        }
        else if(temp->data > max2 && temp->data < max1)
        {
            max2 = temp->data;
        }
        temp = temp->next;
    }
    return max2;
}

// DisplayPerfect
template <class T>
void SinglyLLL<T>::DisplayPerfect()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Perfect numbers : ";
    while(temp != NULL)
    {
        int sum=0;
        for(int i=1;i<=temp->data/2;i++)
        {
            if((temp->data % i)==0)
                sum+=i;
        }
        if(sum==temp->data && temp->data!=0)
            cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

// DisplayPrime
template <class T>
void SinglyLLL<T>::DisplayPrime()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Prime numbers : ";
    while(temp != NULL)
    {
        bool isPrime=true;
        if(temp->data<2)
            isPrime=false;
        else
        {
            for(int i=2;i<=temp->data/2;i++)
            {
                if((temp->data % i)==0)
                {
                    isPrime=false;
                    break;
                }
            }
        }
        if(isPrime)
            cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

// AdditionEven
template <class T>
int SinglyLLL<T>::AdditionEven()
{
    SinglyLLLnode<T>* temp = first;
    int sum=0;
    while(temp!=NULL)
    {
        if((temp->data%2)==0)
            sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}

// SumDigit
template <class T>
void SinglyLLL<T>::SumDigit()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Sum of digits : ";
    while(temp!=NULL)
    {
        int value=temp->data;
        int sum=0;
        while(value!=0)
        {
            sum+=value%10;
            value/=10;
        }
        cout<<sum<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

// ReverseData
template <class T>
void SinglyLLL<T>::ReverseData()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Reversed data : ";
    while(temp!=NULL)
    {
        int value=temp->data;
        int rev=0;
        while(value!=0)
        {
            rev=rev*10+(value%10);
            value/=10;
        }
        cout<<rev<<"\t";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

// DisplayProductDigit
template <class T>
void SinglyLLL<T>::DisplayProductDigit()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Product of digits : ";
    while(temp!=NULL)
    {
        int value=temp->data;
        int prod=1;
        while(value!=0)
        {
            int d=value%10;
            if(d==0) d=1;
            prod*=d;
            value/=10;
        }
        cout<<prod<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

// DisplaySmallDigit
template <class T>
void SinglyLLL<T>::DisplaySmallDigit()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Smallest digits : ";
    while(temp!=NULL)
    {
        int value=temp->data;
        int small=9;
        while(value!=0)
        {
            int d=value%10;
            if(d<small) small=d;
            value/=10;
        }
        cout<<small<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

// DisplayLargeDigit
template <class T>
void SinglyLLL<T>::DisplayLargeDigit()
{
    SinglyLLLnode<T>* temp = first;
    cout<<"Largest digits : ";
    while(temp!=NULL)
    {
        int value=temp->data;
        int large=0;
        while(value!=0)
        {
            int d=value%10;
            if(d>large) large=d;
            value/=10;
        }
        cout<<large<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

// ReverseLinkedList
template <class T>
void SinglyLLL<T>::ReverseLinkedList()
{
    SinglyLLLnode<T>* prev=NULL;
    SinglyLLLnode<T>* curr=first;
    SinglyLLLnode<T>* next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    first=prev;
}


////////////////////////////////////////////////////////////////////////////
//
//  Class :      DoublyCLL
//  Description: Generic implentation of Doubly circular linked list
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////

template <class T>
struct DoublyCLLnode
{
    T data;
    struct DoublyCLLnode<T> * next;
    struct DoublyCLLnode<T> * prev;
};

template <class T>
class DoublyCLL
{
    private:
        struct DoublyCLLnode<T> * first;
        struct DoublyCLLnode<T> * last;
        int iCount ;
    public:
        DoublyCLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void Display();
        int Count();

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int  SearchFirstOcc(T no );
        int  SearchLastOcc(T no );
        T    Addition();
        T    Maximum();
        T    Minimum();
        void DisplayPerfect();
        void DisplayPrime();
        T    AdditionEven();
        T    SecMaximum();
        void SumDigit();
        void ReverseData();
        void DisplayProductDigit();
        void DisplaySmallDigit();
        void DisplayLargeDigit();
        void ReverseLinkedList();
        
};

template <class T>
DoublyCLL<T> :: DoublyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;

}

template <class T>
void DoublyCLL<T> :: InsertFirst(T no)
{
    struct DoublyCLLnode<T> *newn = new DoublyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {   
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    first->prev = last;
    last->next = first;

    iCount++;
}

template <class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    struct DoublyCLLnode<T>*newn = new DoublyCLLnode<T>;
    struct DoublyCLLnode<T> *temp = NULL;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {   
       last->next = newn;
       newn->prev = last;
       last = newn;
    }

    first->prev = last;
    last->next = first;
    iCount++;
    
}

template <class T>
void DoublyCLL<T> :: InsertAtPos(T no, int pos)
{
    struct DoublyCLLnode<T>* newn = new DoublyCLLnode<T>;
    struct DoublyCLLnode<T>* temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos ==  iCount + 1)
    {
        InsertLast(no);
    }
    else
    {

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;

        iCount++;
    }
    
}

template <class T>
void DoublyCLL<T> :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        
        first = first->next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }

    iCount--;
    
}

template <class T>
void DoublyCLL<T> :: DeleteLast()
{

    if(first == NULL && last == NULL)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete first->prev;
    
        first->prev = last;
        last->next = first;
      
    }

    iCount--;
    
}

template <class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyCLLnode<T>* temp = NULL;
    struct DoublyCLLnode<T>* target = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos ==  iCount + 1)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        delete target;


        iCount--;
    }
    
}

template <class T>
void DoublyCLL<T> :: Display()
{
    struct DoublyCLLnode<T> * temp = NULL;

    temp = first;

    if(first == NULL )
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != first);
    
    cout<<"\n";
    
}

template <class T>
int DoublyCLL<T> :: Count ()
{
    return iCount; 
}


template <class T>
int DoublyCLL<T>:: SearchFirstOcc(T no )
{
    
    if(first == NULL)
    {
         return -1;
    }
    struct DoublyCLLnode<T>* temp = first;
    int pos = 1;

    do
    {
        if(temp->data == no)
        {
            return pos;
        } 
        pos++;
        temp = temp->next;
    }while(temp != first);

    return -1;
}

template <class T>
int DoublyCLL<T> :: SearchLastOcc(T no )
{
    if(first == NULL) 
    {
        return -1;
    }
    struct DoublyCLLnode<T>* temp = first;
    int pos = 1, lastpos = -1;

    do
    {
        if(temp->data == no)
        {
            lastpos = pos;
        } 
        pos++;
        temp = temp->next;
    }while(temp != first);
    
    return lastpos;
}

template <class T>
T DoublyCLL<T> :: Addition( )
{
    if(first == NULL)
    {
         return 0;
    }

    struct DoublyCLLnode<T> * temp = first;
    int iSum = 0;

    do
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }while(temp != first);
    
    return iSum;
}

template <class T>
T DoublyCLL<T> :: Maximum( )
{
    if(first == NULL) 
    {
        return 0;
    }

    struct DoublyCLLnode<T> * temp = first;
    int Max = temp->data;

    do
    {
        if(temp->data > Max)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }while(temp != first);
    
    return Max;
}

template <class T>
T DoublyCLL<T> :: Minimum( )
{
    if(first == NULL)
    {
        return 0;
    } 

    struct DoublyCLLnode<T> * temp = first;
    int Min = temp->data;

    do
    {
        if(temp->data <  Min)
        {
            Min = temp->data;
        }
        temp = temp->next;
    }while(temp != first);
    
    return Min;
}

template <class T>
void DoublyCLL<T> :: DisplayPerfect()
{
    if(first == NULL)
    {
        return;
    } 

    struct DoublyCLLnode<T> * temp = first;

    do
    {
        int iSum = 0;
        for(int iCnt = 1; iCnt <= temp->data/2; iCnt++)
        {
            if(temp->data % iCnt == 0)
            {
                iSum += iCnt;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
void DoublyCLL<T> :: DisplayPrime()
{
    if(first == NULL)
    {
        return;
    } 

    struct DoublyCLLnode<T> * temp = first;

    do
    {
        bool bflag = true;
        if(temp->data < 2) 
        {
            bflag = false;
        }
        for(int iCnt = 2; iCnt <= temp->data/2; iCnt++)
        {
            if(temp->data % iCnt == 0)
            {
                bflag = false;
                break;
            }
        }
        if(bflag)
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
T DoublyCLL<T> :: AdditionEven( )
{
    if(first == NULL) 
    {
        return 0;
    }

    struct DoublyCLLnode<T> * temp = first;
    int SumEven = 0;

    do
    {
        if(temp->data % 2 == 0 )
        {
            SumEven += temp->data;
        }
        temp = temp->next;
    }while(temp != first);

    return SumEven;
}

template <class T>
T DoublyCLL<T> ::  SecMaximum()
{
    if(first == NULL) 
    {
        return 0;
    }

    int Max = Minimum();
    int SecMax = Minimum();

    struct DoublyCLLnode<T>* temp = first;
    do
    {
        if(temp->data > Max)
        {
            SecMax = Max;
            Max = temp->data;
        }
        else if(temp->data > SecMax && temp->data < Max)
        {
            SecMax = temp->data;
        }
        temp = temp->next;
    }while(temp != first);

    return SecMax;
}

template <class T>
void DoublyCLL<T> :: SumDigit( )
{
    if(first == NULL) 
    {
        return;
    }

    struct DoublyCLLnode<T> * temp = first;
    int value = 0;
    int iSum = 0;
   do
    {
         value = temp->data;   // reset per node
         iSum = 0;

        while(value != 0)
        {
            iSum += value % 10;
            value /= 10;
        }
        cout << iSum << "\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";  
}

template <class T>
void DoublyCLL<T> :: ReverseData()
{
    if(first == NULL)
    {
        return;
    } 

    struct DoublyCLLnode<T> * temp = first;
    int value = temp->data;
    int iRev = 0;

    cout<<"ReverseData is : ";
    do
    {
        value = temp->data;
        iRev = 0;
        
        while(value != 0)
        {
            iRev = iRev * 10 + (value % 10);
            value /= 10;
        }
        
        cout<<iRev<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
    
}

template <class T>
void DoublyCLL<T> :: DisplayProductDigit()
{
    if(first == NULL) 
    {
        return;
    }

    struct DoublyCLLnode<T> * temp = first;
    int value = temp->data;
    int prod = 1;

    cout<<"Product of digit is :";
    do
    {
        value = temp->data;
        prod = 1;

        while(value != 0)
        {
            int iDigit = value % 10;
            if(iDigit == 0) 
            {
                iDigit = 1;
            }
            prod *= iDigit;
            value /= 10;
        }
       
        cout<<prod<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";

     
}

template <class T>
void DoublyCLL<T> :: DisplaySmallDigit()
{
    if(first == NULL)
    {
         return;
    }

    struct DoublyCLLnode<T> * temp = first;
    int value = temp->data;
    int small = 9;

    cout<<"Smallest digit from data is ";
    do
    {
        value = temp->data;
        small = 9;
        
        while(value != 0)
        {
            int iDigit = value % 10;
            if(iDigit < small) 
            {
                small = iDigit;
            }
            value /= 10;
        }
        
        cout<<small<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
void DoublyCLL<T> :: DisplayLargeDigit( )
{
    if(first == NULL) 
    {
        return;
    }
    struct DoublyCLLnode<T> * temp = first;
    int value = temp->data;
    int large = 0;

    cout<<"Largest digit from data is : ";
    do
    {
        value = temp->data;
        large = 0;
        
        while(value != 0) 
        {
            int iDigit = value % 10;
            if(iDigit > large) 
            {
                large = iDigit;
            }
            value /= 10;
        }
        
        cout<<large<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
void DoublyCLL<T> :: ReverseLinkedList()
{
    if(first == NULL || first == last) return;

    DoublyCLLnode<T>* prev = last;
    DoublyCLLnode<T>* curr = first;
    DoublyCLLnode<T>* next = NULL;

    do
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }while(curr != first);

    last = first;
    first = prev;
}

////////////////////////////////////////////////////////////////////////////
//
//  Class :      SinglyCLL
//  Description: Generic implentation of Singly circular linked list
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////


template <class T>
struct SinglyCLLnode
{
    T data;
    struct SinglyCLLnode<T> * next;
};

template <class T>
class SinglyCLL
{
    private:
        struct SinglyCLLnode<T> * first;
        struct SinglyCLLnode<T> * last;
        int iCount ;
    public:
        SinglyCLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void Display();
        int  Count();

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int  SearchFirstOcc(T no );
        int  SearchLastOcc(T no );
        T    Addition();
        T    Maximum();
        T    Minimum();
        void DisplayPerfect();
        void DisplayPrime();
        T    AdditionEven();
        T    SecMaximum();
        void SumDigit();
        void ReverseData();
        void DisplayProduct();
        void DisplaySmall();
        void DisplayLarge();
        void ReverseLinkedList();
        
};

template <class T>
SinglyCLL<T> :: SinglyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void SinglyCLL<T> :: InsertFirst(T no)
{
    struct SinglyCLLnode<T> *newn = new SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {   
        newn->next = first;
        first = newn;
    }

    last->next = first;
    iCount++;
}

template <class T>
void SinglyCLL<T> :: InsertLast(T no)
{
    struct SinglyCLLnode<T> *newn = new SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {   
        last->next = newn;
        last = newn;
    }

    last->next = first;
    iCount++;
}

template <class T>
void SinglyCLL<T> :: InsertAtPos(T no, int pos)
{
    if(pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos ==  iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct SinglyCLLnode<T>* newn = new SinglyCLLnode<T>;
        newn->data = no;
        newn->next = NULL;

        struct SinglyCLLnode<T>* temp = first;
        for(int iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyCLL<T> :: DeleteFirst()
{
    if(first == NULL && last == NULL) return;

    if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        struct SinglyCLLnode<T>* temp = first;
        first = first->next;
        delete temp;
        last->next = first;
    }
    iCount--;
}

template <class T>
void SinglyCLL<T> :: DeleteLast()
{
    if(first == NULL && last == NULL) return;

    if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        struct SinglyCLLnode<T>* temp = first;
        while(temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;
        last->next = first;
    }
    iCount--;
}

template <class T>
void SinglyCLL<T> :: DeleteAtPos(int pos)
{
    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos ==  iCount)
    {
        DeleteLast();
    }
    else
    {
        struct SinglyCLLnode<T>* temp = first;
        for(int iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }
        struct SinglyCLLnode<T>* target = temp->next;
        temp->next = target->next;
        delete target;
        iCount--;
    }
}

template <class T>
void SinglyCLL<T> :: Display()
{
    if(first == NULL)
    {
        return;
    }

    struct SinglyCLLnode<T> * temp = first;
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != first);
    
    cout<<"\n";
}

template <class T>
int SinglyCLL<T> :: Count ()
{
    return iCount; 
}

template <class T>
int SinglyCLL<T> :: SearchFirstOcc(T no )
{
    
    if(first == NULL)
    {
         return -1;
    }
    struct SinglyCLLnode<T>* temp = first;
    int pos = 1;

    do
    {
        if(temp->data == no)
        {
            return pos;
        } 
        pos++;
        temp = temp->next;
    }while(temp != first);

    return -1;
}

template <class T>
int SinglyCLL<T> :: SearchLastOcc(T no )
{
    if(first == NULL) 
    {
        return -1;
    }
    struct SinglyCLLnode<T>* temp = first;
    int pos = 1, lastpos = -1;

    do
    {
        if(temp->data == no)
        {
            lastpos = pos;
        } 
        pos++;
        temp = temp->next;
    }while(temp != first);
    
    return lastpos;
}

template <class T>
T SinglyCLL<T> :: Addition( )
{
    if(first == NULL) return 0;

    struct SinglyCLLnode<T> * temp = first;
    int iSum = 0;

    do
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }while(temp != first);
    
    return iSum;
}

template <class T>
T SinglyCLL<T> :: Maximum( )
{
    if(first == NULL) 
    {
        return 0;
    }

    struct SinglyCLLnode<T> * temp = first;
    int Max = temp->data;

    do
    {
        if(temp->data > Max)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }while(temp != first);
    
    return Max;
}

template <class T>
T SinglyCLL<T> :: Minimum( )
{
    if(first == NULL)
    {
        return 0;
    } 

    struct SinglyCLLnode<T> * temp = first;
    int Min = temp->data;

    do
    {
        if(temp->data <  Min)
        {
            Min = temp->data;
        }
        temp = temp->next;
    }while(temp != first);
    
    return Min;
}

template <class T>
void SinglyCLL<T> :: DisplayPerfect()
{
    if(first == NULL)
    {
        return;
    } 

    struct SinglyCLLnode<T> * temp = first;

    do
    {
        int iSum = 0;
        for(int iCnt = 1; iCnt <= temp->data/2; iCnt++)
        {
            if(temp->data % iCnt == 0)
            {
                iSum += iCnt;
            }
        }
        if(iSum == temp->data)
        {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
void SinglyCLL<T> :: DisplayPrime()
{
    if(first == NULL)
    {
        return;
    } 

    struct SinglyCLLnode<T> * temp = first;

    do
    {
        bool bflag = true;
        if(temp->data < 2) bflag = false;
        for(int iCnt = 2; iCnt <= temp->data/2; iCnt++)
        {
            if(temp->data % iCnt == 0)
            {
                bflag = false;
                break;
            }
        }
        if(bflag) cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
T SinglyCLL<T> :: AdditionEven( )
{
    if(first == NULL) 
    {
        return 0;
    }

    struct SinglyCLLnode<T> * temp = first;
    int SumEven = 0;

    do
    {
        if(temp->data % 2 == 0 )
        {
            SumEven += temp->data;
        }
        temp = temp->next;
    }while(temp != first);

    return SumEven;
}

template <class T>
T SinglyCLL<T> ::  SecMaximum()
{
    if(first == NULL) 
    {
        return 0;
    }

    int Max = Minimum();
    int SecMax = Minimum();

    struct SinglyCLLnode<T>* temp = first;
    do
    {
        if(temp->data > Max)
        {
            SecMax = Max;
            Max = temp->data;
        }
        else if(temp->data > SecMax && temp->data < Max)
        {
            SecMax = temp->data;
        }
        temp = temp->next;
    }while(temp != first);

    return SecMax;
}

template <class T>
void SinglyCLL<T> :: SumDigit( )
{
    if(first == NULL) 
    {
        return;
    }

    struct SinglyCLLnode<T> * temp = first;
    int value = temp->data;
    int iSum = 0;

    do
    {
        value = temp->data;
        iSum = 0;

        while(value != 0)
        {
            iSum += value % 10;
            value /= 10;
        }
       
        cout<<iSum<<"\t";
        temp = temp->next;
    }while(temp != first);

     cout<<"\n";
}

template <class T>
void SinglyCLL<T> :: ReverseData()
{
    if(first == NULL) return;

    struct SinglyCLLnode<T> * temp = first;
    int value = temp->data;
    int iRev = 0;

    do
    {
        value = temp->data;
        iRev = 0;
        
        while(value != 0)
        {
            iRev = iRev * 10 + (value % 10);
            value /= 10;
        }
        
        cout<<iRev<<"\t";
        temp = temp->next;
    }while(temp != first);

   cout<<"\n"; 
}

template <class T>
void SinglyCLL<T> :: DisplayProduct()
{
    if(first == NULL) return;

    struct SinglyCLLnode<T> * temp = first;
    int value = temp->data;
    int prod = 1;

    do
    {
        value = temp->data;
        prod = 1;

        while(value != 0)
        {
            int iDigit = value % 10;
            if(iDigit == 0) iDigit = 1;
            prod *= iDigit;
            value /= 10;
        }
       
        cout<<prod<<"\t";
        temp = temp->next;
    }while(temp != first);

     cout<<"\n";
}

template <class T>
void SinglyCLL<T> :: DisplaySmall()
{
    if(first == NULL) return;

    struct SinglyCLLnode<T> * temp = first;
    int value = temp->data;
    int small = 9;

    do
    {
        value = temp->data;
        small = 9;
        
        while(value != 0)
        {
            int iDigit = value % 10;
            if(iDigit < small) small = iDigit;
            value /= 10;
        }
        
        cout<<small<<"\t";
        temp = temp->next;
    }while(temp != first);

   cout<<"\n";
}

template <class T>
void SinglyCLL<T> :: DisplayLarge( )
{
    if(first == NULL) return;

    struct SinglyCLLnode<T> * temp = first;
    int value = temp->data;
    int large = 0;

    do
    {
        value = temp->data;
        large = 0;
        
        while(value != 0)
        {
            int iDigit = value % 10;
            if(iDigit > large) large = iDigit;
            value /= 10;
        }
        
        cout<<large<<"\t";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

template <class T>
void SinglyCLL<T> :: ReverseLinkedList()
{
    if(first == NULL || first == last) return;

    SinglyCLLnode<T>* prev = last;
    SinglyCLLnode<T>* curr = first;
    SinglyCLLnode<T>* next = NULL;

    do
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }while(curr != first);

    last = first;
    first = prev;
}


////////////////////////////////////////////////////////////////////////////
//
//  Class :      DoublyLLL
//  Description: Generic implentation of doubly linear linked list
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////


template <class T>
struct DoublyLLLnode
{
    T data;
    struct DoublyLLLnode<T> * next;
    struct DoublyLLLnode<T> * prev;
};

template <class T>
class DoublyLLL
{
    private:
        struct DoublyLLLnode<T> * first;
        int iCount ;
    public:
        DoublyLLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void Display();
        int Count();

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int SearchFirstOcc(T);
        int SearchLastOcc(T);
        int Frequency(T);

        T Addition();
        T Maximum();
        T Minimum();
        T SecMaximum();

        void DisplayPerfect();
        void DisplayPrime();
        int AdditionEven();
        void SumDigit();
        void ReverseData();
        void DisplayProductDigit();
        void DisplaySmallDigit();
        void DisplayLargeDigit();
        void ReverseLinkedList();
        
};

template <class T>
DoublyLLL<T> :: DoublyLLL()
{
    this->first = NULL;
    this->iCount = 0;

}

template <class T>
void DoublyLLL<T> :: InsertFirst(T no)
{
    struct DoublyLLLnode<T> *newn = new DoublyLLLnode<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {   
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    iCount++;
}

template <class T>
void DoublyLLL<T> :: InsertLast(T no)
{
    struct DoublyLLLnode<T> *newn = new DoublyLLLnode<T>;
    struct DoublyLLLnode<T> *temp = NULL;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {   
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    iCount++;
    
}

template <class T>
void DoublyLLL<T> :: InsertAtPos(T no, int pos)
{
    struct DoublyLLLnode<T>* newn = new DoublyLLLnode<T>;
    struct DoublyLLLnode<T>* temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos ==  iCount + 1)
    {
        InsertLast(no);
    }
    else
    {

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;

        iCount++;
    }
    
}

template <class T>
void DoublyLLL<T> :: DeleteFirst()
{
    struct DoublyLLLnode<T>* temp = NULL;

    if(first == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;
        first = first->next;
        first->prev = NULL;
        delete temp;
    }

    iCount--;
    
}

template <class T>
void DoublyLLL<T> :: DeleteLast()
{
    struct DoublyLLLnode<T>* temp = NULL;

    if(first == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
      
    }

    iCount--;
    
}

template <class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyLLLnode<T>* temp = NULL;
    struct DoublyLLLnode<T>* target = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos ==  iCount + 1)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;

        delete target;


        iCount--;
    }
    
}

template <class T>
void DoublyLLL<T> :: Display()
{
    struct DoublyLLLnode<T> * temp = NULL;

    temp = first;

    while(temp != NULL) 
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"\n";
    
}

template <class T>
int DoublyLLL<T> :: Count ()
{
    return iCount; 
}

// SearchFirstOcc
template <class T>
int DoublyLLL<T>::SearchFirstOcc(T no)
{
    DoublyLLLnode<T>* temp = first;
    int pos = 1;

    while(temp != NULL)
    {
        if(temp->data == no)
            return pos;
        pos++;
        temp = temp->next;
    }
    return -1;
}

// SearchLastOcc
template <class T>
int DoublyLLL<T>::SearchLastOcc(T no)
{
    DoublyLLLnode<T>* temp = first;
    int pos = 1, lastPos = -1;

    while(temp != NULL)
    {
        if(temp->data == no)
            lastPos = pos;
        pos++;
        temp = temp->next;
    }
    return lastPos;
}

// Frequency
template <class T>
int DoublyLLL<T>::Frequency(T no)
{
    DoublyLLLnode<T>* temp = first;
    int cnt = 0;

    while(temp != NULL)
    {
        if(temp->data == no)
            cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Addition
template <class T>
T DoublyLLL<T>::Addition()
{
    DoublyLLLnode<T>* temp = first;
    T sum = 0;

    while(temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

// Maximum
template <class T>
T DoublyLLL<T>::Maximum()
{
    DoublyLLLnode<T>* temp = first;
    T max = temp->data;

    while(temp != NULL)
    {
        if(temp->data > max)
            max = temp->data;
        temp = temp->next;
    }
    return max;
}

// Minimum
template <class T>
T DoublyLLL<T>::Minimum()
{
    DoublyLLLnode<T>* temp = first;
    T min = temp->data;

    while(temp != NULL)
    {
        if(temp->data < min)
            min = temp->data;
        temp = temp->next;
    }
    return min;
}

// SecMaximum
template <class T>
T DoublyLLL<T>::SecMaximum()
{
    if(first == NULL || first->next == NULL)
        return -1;

    T max1 = first->data, max2 = first->data;
    DoublyLLLnode<T>* temp = first;

    while(temp != NULL)
    {
        if(temp->data > max1)
        {
            max2 = max1;
            max1 = temp->data;
        }
        else if(temp->data > max2 && temp->data < max1)
        {
            max2 = temp->data;
        }
        temp = temp->next;
    }
    return max2;
}

// DisplayPerfect
template <class T>
void DoublyLLL<T>::DisplayPerfect()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Perfect numbers : ";

    while(temp != NULL)
    {
        int sum = 0;
        for(int i=1; i<=temp->data/2; i++)
        {
            if((temp->data % i) == 0)
                sum += i;
        }
        if(sum == temp->data && temp->data != 0)
            cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

// DisplayPrime
template <class T>
void DoublyLLL<T>::DisplayPrime()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Prime numbers : ";

    while(temp != NULL)
    {
        bool isPrime = true;

        if(temp->data < 2)
            isPrime = false;
        else
        {
            for(int i=2; i<=temp->data/2; i++)
            {
                if((temp->data % i) == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime)
            cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

// AdditionEven
template <class T>
int DoublyLLL<T>::AdditionEven()
{
    DoublyLLLnode<T>* temp = first;
    int sum = 0;

    while(temp != NULL)
    {
        if((temp->data % 2) == 0)
            sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

// SumDigit
template <class T>
void DoublyLLL<T>::SumDigit()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Sum of digits : ";

    while(temp != NULL)
    {
        int value = temp->data;
        int sum = 0;

        while(value != 0)
        {
            sum += value % 10;
            value /= 10;
        }
        cout << sum << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

// ReverseData
template <class T>
void DoublyLLL<T>::ReverseData()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Reversed data : ";

    while(temp != NULL)
    {
        int value = temp->data;
        int rev = 0;

        while(value != 0)
        {
            rev = rev*10 + (value % 10);
            value /= 10;
        }
        cout << rev << "\t";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// DisplayProductDigit
template <class T>
void DoublyLLL<T>::DisplayProductDigit()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Product of digits : ";

    while(temp != NULL)
    {
        int value = temp->data;
        int prod = 1;

        while(value != 0)
        {
            int d = value % 10;
            if(d == 0) d = 1;
            prod *= d;
            value /= 10;
        }
        cout << prod << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

// DisplaySmallDigit
template <class T>
void DoublyLLL<T>::DisplaySmallDigit()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Smallest digits : ";

    while(temp != NULL)
    {
        int value = temp->data;
        int small = 9;

        while(value != 0)
        {
            int d = value % 10;
            if(d < small) small = d;
            value /= 10;
        }
        cout << small << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

// DisplayLargeDigit
template <class T>
void DoublyLLL<T>::DisplayLargeDigit()
{
    DoublyLLLnode<T>* temp = first;
    cout << "Largest digits : ";

    while(temp != NULL)
    {
        int value = temp->data;
        int large = 0;

        while(value != 0)
        {
            int d = value % 10;
            if(d > large) large = d;
            value /= 10;
        }
        cout << large << "\t";
        temp = temp->next;
    }
    cout << "\n";
}

// ReverseLinkedList for Doubly Linear Linked List
template <class T>
void DoublyLLL<T>::ReverseLinkedList()
{
    if(first == NULL || first->next == NULL) 
        return;   // Empty list or single node

    DoublyLLLnode<T>* temp = NULL;
    DoublyLLLnode<T>* curr = first;

    // Swap next and prev for all nodes
    while(curr != NULL)
    {
        temp = curr->prev;         // store prev
        curr->prev = curr->next;   // swap prev and next
        curr->next = temp;         // link back

        curr = curr->prev;         // move to next node (old prev)
    }

    // After loop, 'temp' points to the old prev of the head,
    // which is now the new head
    if(temp != NULL)
    {
        first = temp->prev;
    }
}



////////////////////////////////////////////////////////////////////////////
//
//  Class :      BST
//  Description: Generic implentation of binary search tree
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////


template <class T>
struct BTSnode
{
    T data;
    BTSnode<T> * rchild;
    BTSnode<T> * lchild;
};

template <class T>
class BTS
{
    private:
        BTSnode<T> * first;
        int iCount;
    public:
        BTS();
        void Insert(T);
        void Inorder();
        void Preorder();
        void Postorder();
        bool Search(T);
        int  Count();
        int leafCount();
        int ParentCount();

    private:   // helper functions
        void InorderX(BTSnode<T>*);
        void PreorderX(BTSnode<T>*);
        void PostorderX(BTSnode<T>*);
        int CountX(BTSnode<T>*);
        int LeafX(BTSnode<T>*);
        int ParentX(BTSnode<T>*);
};

template <class T>
BTS<T> :: BTS()
{
    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void BTS<T> :: Insert(T no)
{
    BTSnode<T> * newn = new BTSnode<T>;
    BTSnode<T> * temp = NULL;

    newn->data = no;
    newn->rchild = NULL;
    newn->lchild = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {  
        temp = first;  
        while(1)
        {
            if(no == temp->data)
            {
                cout<<"Unable to add duplicate data \n";
                delete newn;
                return;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(no < temp->data)
            { 
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

//---------------- Traversals ----------------
template <class T>
void BTS<T>::InorderX(BTSnode<T>* temp)
{
    if(temp != NULL)
    {
        InorderX(temp->lchild);
        cout<<temp->data<<"\t";
        InorderX(temp->rchild);
    }
}

template <class T>
void BTS<T>::Inorder()
{
    InorderX(first);
}

template <class T>
void BTS<T>::PreorderX(BTSnode<T>* temp)
{
    if(temp != NULL)
    {
        cout<<temp->data<<"\t";
        PreorderX(temp->lchild);
        PreorderX(temp->rchild);
    }
}

template <class T>
void BTS<T>::Preorder()
{
    PreorderX(first);
}

template <class T>
void BTS<T>::PostorderX(BTSnode<T>* temp)
{
    if(temp != NULL)
    {
        PostorderX(temp->lchild);
        PostorderX(temp->rchild);
        cout<<temp->data<<"\t";
    }
}

template <class T>
void BTS<T>::Postorder()
{
    PostorderX(first);
}

//---------------- Search ----------------

template <class T>
bool BTS<T> :: Search(T no)
{
    BTSnode<T> *temp = first;
    int TimeComplexity = 0;
    bool bFlag = false;

    while(temp != NULL)
    {
        if(no == temp->data)
        {
            bFlag = true;
            break;
        }
        else if(no > temp->data)
        {      
            temp = temp->rchild;
        }
        else if(no < temp->data)
        {      
            temp = temp->lchild;
        }
        TimeComplexity++;
    }
   
    cout<<"Time Complexity is : "<<TimeComplexity<<"\n";
    return bFlag;
}

//---------------- Count nodes ----------------

template <class T>
int BTS<T>::CountX(BTSnode<T>* temp)
{
    static int iCount = 0;
    if(temp == NULL) 
    {
        return 0;
    }
    if(temp != NULL)
    {
        iCount++;
        ParentX(temp->lchild);
        ParentX(temp->rchild);
    }

    return iCount;
}

template <class T>
int BTS<T>::Count()
{
    return CountX(first);
}

//---------------- Count leaf nodes ----------------

template <class T>
int BTS<T>::LeafX(BTSnode<T>* temp)
{
    static int iCount = 0;
    if(temp == NULL) 
    {
        return 0;
    }
    if(temp->lchild == NULL || temp->rchild == NULL)
    {
        iCount++;
        ParentX(temp->lchild);
        ParentX(temp->rchild);
    }

    return iCount;
}

template <class T>
int BTS<T>::leafCount()
{
    return LeafX(first);
}

//---------------- Count parent nodes ----------------

template <class T>
int BTS<T>::ParentX(BTSnode<T>* temp)
{
    static int iCount = 0;
    if(temp == NULL) 
    {
        return 0;
    }
    if(temp->lchild != NULL || temp->rchild != NULL)
    {
        iCount++;
        ParentX(temp->lchild);
        ParentX(temp->rchild);
    }

    return iCount;
}

template <class T>
int BTS<T>::ParentCount()
{
    return ParentX(first);
}



////////////////////////////////////////////////////////////////////////////
//
//  Class :      Sorting
//  Description: Generic implentation of sorting algorithms
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////


template <class T>
class ArrayX            
{
    public:
        int *Arr;
        int iSize;
        bool Sorted;
    
        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        void BubbleSort();
        void BubbleSortEfficient();
        void SelectionSort();
        void InsertionSort();
    
};

template <class T>
ArrayX<T> :: ArrayX(int no)
{
    iSize = no;
    Arr = new T[iSize];
    Sorted = true;
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter "<<iSize<<" elements : \n";
    
    int i =0;                   // 11       

    for(i = 0; i < iSize;i++)
    {
        cout<<"Enter the element no : "<<i+1<<"\n";
        cin>>Arr[i];

        if((i > 0) && (Sorted == true))     // IMP
        {
            if(Arr[i] < Arr[i-1])
            {
                Sorted = false;
            }
        }
    }
}
template <class T>
void ArrayX<T> :: Display()
{
    cout<<"Elements of the array are : \n";
    
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

template <class T>
void ArrayX<T> :: BubbleSort()
{
    int i = 0, j = 0, temp = 0;

    if(Sorted == true)
    {
        return;
    }
    
    for(i = 0; i < iSize ; i++)         // Outer loop
    {
        for(j = 0; j < iSize - 1; j++)      // Inner loop
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }

        cout<<"Data after Pass : "<<i+1<<"\n";

        Display();
    }
}
template <class T>
void ArrayX<T> :: BubbleSortEfficient()
{
    int i = 0, j = 0, temp = 0;
    bool bFlag = true;

    if(Sorted == true)
    {
        return;
    }
    
    for(i = 0; (i < iSize && bFlag == true) ; i++)         // Outer loop
    {
        bFlag = false;

        for(j = 0; j < iSize - 1 - i; j++)      // Inner loop
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;

                bFlag = true;
            }
        }

        cout<<"Data after Pass : "<<i+1<<"\n";

        Display();
    }
}


template <class T>
void ArrayX<T> :: SelectionSort()
{
    int i = 0, j = 0, min_index = 0, temp = 0;

    for(i = 0 ; i < iSize-1; i++)
    {
        min_index = i;

        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }

        if(i != min_index)
        {
            temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = temp;
        }
    }
}

template <class T>
void ArrayX<T> :: InsertionSort()
{
    int i = 0, j = 0, selected = 0;

    for(i = 1; i < iSize; i++)
    {
        for(j = i - 1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected); j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = selected;
    }
}
   


////////////////////////////////////////////////////////////////////////////
//
//  Class :      Searching
//  Description: Generic implentation of searching algorithms
//  Author   :   Ankita Anil Patil
//
////////////////////////////////////////////////////////////////////////////


template <class T>
class ArrayXSearch         
{
    public:
        T *Arr;
        int iSize;
        bool Sorted;
    
        ArrayXSearch(int no);
        ~ArrayXSearch();
        void Accept();
        void Display();  
        bool LinearSearch(T no);
        bool BiDirectionalSearch(T no);
        bool CheckSortedInc();
        bool CheckSortedDec();
        bool BinarySearchInc(T no);
        bool BinarySearchDec(T no);
        bool BinarySearchEfficientInc(T no);
        bool BinarySearchEfficientDec(T no);

};

template <class T>
ArrayXSearch<T> :: ArrayXSearch(int no)
{
    iSize = no;
    Arr = new T[iSize];
    Sorted = true;
}

template <class T>
ArrayXSearch<T>  :: ~ArrayXSearch()
{
    delete Arr;
}

template <class T>
void ArrayXSearch<T>  :: Accept()
{
    cout<<"Enter "<<iSize<<"  elemnts :\n";

    int i = 0;          // 

    for(i = 0; i < iSize; i++)
    {
        cout<<"Enter element no "<<i +1<<"\n";
        if((i > 0 ) && (Sorted == true))         //Important
        {
            if(Arr[i] < Arr[i -1 ])
            {
                Sorted = false;
            }
        }
        cin>>Arr[i];
    }

}

template <class T>
void ArrayXSearch<T> ::Display()
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }

    cout<<"\n";
}

template <class T>
bool ArrayXSearch<T> :: LinearSearch(T no) //N
{
    
    if(Sorted == true) 
    {
        cout<<"Data is sorted \n";
        return BinarySearchEfficientInc(no);
    }
    
    int i = 0;
    bool bFlag = false;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == no)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

template <class T>
bool ArrayXSearch<T>  :: BiDirectionalSearch(T no) // N/2
{
    int iStart = 0;
    int iEnd = 0;
    bool bFlag = false;

    for(iStart = 0, iEnd = iSize -1;iStart <= iEnd; iStart++,iEnd--)
    {
        if(Arr[iStart] == no || Arr[iEnd] == no )
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

template <class T>
bool ArrayXSearch<T>  :: CheckSortedInc()
{
    bool bFlag = true;
    int i = 0;
    for(i = 0; i < iSize -1  ; i++)
    {
        if(Arr[i] > Arr[i + 1]) // change removed = 
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

template <class T>
bool ArrayXSearch<T>  :: CheckSortedDec()
{
    bool bFlag = true;
    int i = 0;
    for(i = 0; i< iSize -1  ; i++)
    {
        if(Arr[i] < Arr[i + 1]) // change removed = 
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

template <class T>
bool ArrayXSearch<T>  :: BinarySearchInc(T no)
{
    int iStart = 0,iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd  - iStart) / 2);

        if(Arr[iMid] ==  no)
        {
            bFlag = true;
            break;
        }
        else if(no < Arr[iMid] )    //First half(left window)
        {
            iEnd = iMid -1;
        }
        else if(no > Arr[iMid])     // Second half (right window)
        {
            iStart = iMid + 1;

        }
    } // End of while


    return bFlag;

}

template <class T>
bool ArrayXSearch<T>  :: BinarySearchDec(T no)
{
    int iStart = 0,iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd  - iStart) / 2);

        if(Arr[iMid] ==  no)
        {
            bFlag = true;
            break;
        }
        else if(no > Arr[iMid] )    //First half(left window)
        {
            iEnd = iMid -1;
        }
        else if(no < Arr[iMid])     // Second half (right window)
        {
            iStart = iMid + 1;

        }
    } // End of while


    return bFlag;

}

template <class T>
bool ArrayXSearch<T>  :: BinarySearchEfficientInc(T no)
{
    if(Sorted == false)       //New
    {
        cout<<"Data is not Sorted\n";
        return LinearSearch(no);    //Important
    }

    int iStart = 0,iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd  - iStart) / 2);

        if(Arr[iMid] ==  no || Arr[iStart] == no || Arr[iEnd] == no) // change
        {
            bFlag = true;
            break;
        }
        else if(no < Arr[iMid] )    //First half(left window)
        {
            iEnd = iMid -1;
        }
        else if(no > Arr[iMid])     // Second half (right window)
        {
            iStart = iMid + 1;

        }
    } // End of while


    return bFlag;

}

template <class T>
bool ArrayXSearch<T>  :: BinarySearchEfficientDec(T no)
{
    int iStart = 0,iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd  - iStart) / 2);

        if(Arr[iMid] ==  no || Arr[iStart] == no || Arr[iEnd] == no) // change
        {
            bFlag = true;
            break;
        }
        else if(no > Arr[iMid] )    //First half(left window)
        {
            iEnd = iMid -1;
        }
        else if(no < Arr[iMid])     // Second half (right window)
        {
            iStart = iMid + 1;

        }
    } // End of while


    return bFlag;

}

int main()
{
    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tSingly Linear Linked List";
    cout << "\n-------------------------------------------------------------\n";

    SinglyLLL<int> slist;
    slist.InsertFirst(10);
    slist.InsertFirst(20);
    slist.InsertLast(30);
    slist.InsertAtPos(25, 2);
    slist.Display();

    cout << "Count: " << slist.Count() << endl;
    cout << "SearchFirstOcc(25): " << slist.SearchFirstOcc(25) << endl;
    cout << "SearchLastOcc(10): " << slist.SearchLastOcc(10) << endl;
    cout << "Frequency(10): " << slist.Frequency(10) << endl;
    cout << "Addition: " << slist.Addition() << endl;
    cout << "Maximum: " << slist.Maximum() << " Minimum: " << slist.Minimum() << endl;
    cout << "Second Maximum: " << slist.SecMaximum() << endl;

    slist.DisplayPerfect();
    slist.DisplayPrime();

    cout << "AdditionEven: " << slist.AdditionEven() << endl;

    slist.SumDigit();
    slist.ReverseData();
    slist.DisplayProductDigit();
    slist.DisplaySmallDigit();
    slist.DisplayLargeDigit();
    slist.ReverseLinkedList();
    slist.Display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tDoubly Linear Linked List";
    cout << "\n-------------------------------------------------------------\n";

    DoublyLLL<int> dlist;
    dlist.InsertFirst(11);
    dlist.InsertLast(22);
    dlist.InsertAtPos(33, 2);

    dlist.Display();

    cout << "Count: " << dlist.Count() << endl;
    cout << "Addition: " << dlist.Addition() << " Maximum: " << dlist.Maximum() << " Minimum: " << dlist.Minimum() << endl;
    dlist.DisplayPerfect();
    dlist.DisplayPrime();
    dlist.SumDigit();
    dlist.ReverseData();
    dlist.DisplayProductDigit();
    dlist.DisplaySmallDigit();
    dlist.DisplayLargeDigit();
    dlist.ReverseLinkedList();
    dlist.Display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tSingly Circular Linked List";
    cout << "\n-------------------------------------------------------------\n";

    SinglyCLL<int> scll;
    scll.InsertFirst(5);
    scll.InsertLast(15);
    scll.InsertAtPos(25, 2);

    scll.Display();

    cout << "Count: " << scll.Count() << endl;
    cout << "Addition: " << scll.Addition() << " Maximum: " << scll.Maximum() << " Minimum: " << scll.Minimum() << endl;
    scll.DisplayPerfect();
    scll.DisplayPrime();
    scll.SumDigit();
    scll.ReverseData();
    scll.DisplayProduct();
    scll.DisplaySmall();
    scll.DisplayLarge();
    scll.ReverseLinkedList();
    scll.Display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tDoubly Circular Linked List";
    cout << "\n-------------------------------------------------------------\n";

    DoublyCLL<int> dcll;
    dcll.InsertFirst(7);
    dcll.InsertLast(14);
    dcll.InsertAtPos(21, 2);

    dcll.Display();
    
    cout << "Count: " << dcll.Count() << endl;
    cout << "Addition: " << dcll.Addition() << " Maximum: " << dcll.Maximum() << " Minimum: " << dcll.Minimum() << endl;
    dcll.DisplayPerfect();
    dcll.DisplayPrime();
    dcll.SumDigit();
    dcll.ReverseData();
    dcll.DisplayProductDigit();
    dcll.DisplaySmallDigit();
    dcll.DisplayLargeDigit();
    dcll.ReverseLinkedList();
    dcll.Display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tQueue Demonstration";
    cout << "\n-------------------------------------------------------------\n";

    QueueX<int> q;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.display();
    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tStack Demonstration";
    cout << "\n-------------------------------------------------------------\n";

    StackX<int> st;
    st.push(111);
    st.push(222);
    st.push(333);
    st.display();
    cout << "Popped: " << st.pop() << endl;
    st.display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tBinary Search Tree (BST)";
    cout << "\n-------------------------------------------------------------\n";

    BTS<int> bst;
    bst.Insert(50);
    bst.Insert(30);
    bst.Insert(70);
    bst.Insert(20);
    bst.Insert(40);
    bst.Insert(60);
    bst.Insert(80);
    cout << "Inorder: "; bst.Inorder(); cout << endl;
    cout << "Preorder: "; bst.Preorder(); cout << endl;
    cout << "Postorder: "; bst.Postorder(); cout << endl;
    cout << "Search 40: " << (bst.Search(40) ? "Found" : "Not Found") << endl;

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tSorting Demonstration";
    cout << "\n-------------------------------------------------------------\n";

    ArrayX<int> arr(5);
    arr.Accept();
    arr.Display();
    arr.BubbleSortEfficient();
    arr.Display();
    arr.SelectionSort();
    arr.Display();
    arr.InsertionSort();
    arr.Display();

    cout << "\n-------------------------------------------------------------\n";
    cout << "\t\tSearching Demonstration";
    cout << "\n-------------------------------------------------------------\n";

    ArrayXSearch<int> arrS(5);
    arrS.Accept();
    arrS.Display();
    cout << "LinearSearch(10): " << (arrS.LinearSearch(10) ? "Found" : "Not Found") << endl;
    cout << "BiDirectionalSearch(20): " << (arrS.BiDirectionalSearch(20) ? "Found" : "Not Found") << endl;
    cout << "BinarySearchInc(30): " << (arrS.BinarySearchInc(30) ? "Found" : "Not Found") << endl;

    cout << "\n-------------------------------------------------------------\n";
    cout << "Program Finished Successfully";
    cout << "\n-------------------------------------------------------------\n";

    return 0;
}


