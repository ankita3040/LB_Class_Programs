
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

int main()
{
    return 0;
}