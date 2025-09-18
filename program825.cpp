
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

template<class T>
QueueX<T> :: QueueX()
{
    this->first = NULL;
    this->iCount = 0;

}

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
    struct SinglyLLLnode<T> * next;
};

template <class T>
class SinglyLLL
{
    private:
        struct SinglyLLLnode<T> * first;
        struct SinglyLLLnode<T> * last;
        int iCount ;
    public:
        SinglyLLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void Display();
        int Count();

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        
};

template <class T>
SinglyLLL<T> :: SinglyLLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;

}

template <class T>
void SinglyLLL<T> :: InsertFirst(T no)
{
    struct SinglyLLLnode<T> *newn = new SinglyLLLnode<T>;

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
void SinglyLLL<T> :: InsertLast(T no)
{
    struct SinglyLLLnode<T> *newn = new SinglyLLLnode<T>;

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
void SinglyLLL<T> :: InsertAtPos(T no, int pos)
{
    struct SinglyLLLnode<T>* newn = new SinglyLLLnode<T>;
    struct SinglyLLLnode<T>* temp = NULL;

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

        temp = first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
    
}

template <class T>
void SinglyLLL<T> :: DeleteFirst()
{
    struct SinglyLLLnode<T>* temp = NULL;

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

        last->next = first;
    }

    iCount--;
    
}

template <class T>
void SinglyLLL<T> :: DeleteLast()
{
    struct SinglyLLLnode<T>* temp = NULL;

    if(first == NULL && last == NULL)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != first)
        {
            temp = temp->next;
        }

        delete temp->next;
        last = temp;
         
        last->next = first;
      
    }

    iCount--;
    
}

template <class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    struct SinglyLLLnode<T>* temp = NULL;
    struct SinglyLLLnode<T>* target = NULL;

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

        delete target;


        iCount--;
    }
    
}

template <class T>
void SinglyLLL<T> :: Display()
{
    struct SinglyLLLnode<T> * temp = NULL;

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
int SinglyLLL<T> :: Count ()
{
    return iCount; 
}


int main()
{
    return 0;
}