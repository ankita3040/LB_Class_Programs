#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    
};

class QueueX
{
    private:
        struct node *first;
        int iCount;
    public:
    QueueX();
      void enqueue(int);
      int dequeue();
      void display();
      int Count();

};

QueueX :: QueueX()
{
    this->first = NULL;
    this->iCount = 0;

}

void QueueX ::  enqueue(int no) // InsertLast
{
    struct node * newn = NULL;
    struct node *temp = NULL;
    newn = new struct node;

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

int QueueX :: dequeue()    // Deletefirst
{
    struct node *temp;
    int value = 0;

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

void QueueX ::  display()
{
    struct node *temp = NULL;
    temp = first;

    while(temp  != NULL)
    {
        cout<<"|"<<temp->data<<"|-";
        temp = temp->next;
    }

    cout<<"\n";

}

int QueueX ::  Count()
{
    return iCount;
}

int main()
{
    QueueX * sobj = new QueueX();

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