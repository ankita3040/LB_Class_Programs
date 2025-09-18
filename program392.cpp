#include<iostream>
using namespace std;

template<class T>

struct node
{
    int data;
    struct node *next;
    
};

template<class T>
class QueueX
{
    private:
        struct node<T> *first;
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
    struct node<T> * newn = NULL;
    struct node<T> *temp = NULL;
    newn = new struct node<T>;

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
    struct node<T> *temp;
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
    struct node<T> *temp = NULL;
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

int main()
{
    QueueX<int> * sobj = new QueueX<int>();

    int iRet = 0;

    sobj->enqueue(11);
    sobj->enqueue(21);
    sobj->enqueue(51);
    sobj->enqueue(101);

    sobj->display();

    iRet = sobj->Count();

    cout<<"Number of elements in queue are "<<iRet<<"\n";


    iRet =  sobj->dequeue();
        
    cout<<"Removed elements from queue "<<iRet<<"\n";

    iRet =sobj->dequeue();

    cout<<"Removed elements from queue "<<iRet<<"\n";

    sobj->display();

    iRet = sobj->Count();

    cout<<"Number of elements in queue are "<<iRet<<"\n";

    sobj->enqueue(105);

    sobj->display();

    iRet = sobj->Count();

    cout<<"Number of elements in queue are "<<iRet<<"\n";


    delete sobj;
    
    return 0;

}