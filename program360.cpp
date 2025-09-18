#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};

DoublyCLL :: DoublyCLL()
{
    cout<<"Inside constrcutor\n";
    first = NULL;
    last = NULL;
    iCount = 0;

}

void DoublyCLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL) // LL is empty
    {
        first = newn;
        last = newn;
    }
    else                                // LL contains atleast one node
    {
        newn->next = first;
        first->prev = newn;
        first = newn;

    }

    first->prev = last;
    last->next = first;
    iCount++;

}

void DoublyCLL :: InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL) // LL is empty
    {
        first = newn;
        last = newn;
    }
    else                                // LL contains atleast one node
    {
       last->next = newn;
       newn->prev = last;
       last = newn;

    }

    first->prev = last;
    last->next = first;
    iCount++;


}

void DoublyCLL :: Display()
{
    PNODE temp = NULL;
    cout<<"Elements of ll are "<<"\n";

    temp = first;

    if(first == NULL && last == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"| <=>";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

int DoublyCLL :: Count()
{
    return iCount;
}

void DoublyCLL :: InsertAtPos(int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    if (pos < 1 || pos > iCount +1)
    {
        
    }

}




int main()
{

    DoublyCLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    int iRet = dobj.Count();

    cout<<"Number of elements in ll are "<<iRet<<"\n";
    return 0;
}