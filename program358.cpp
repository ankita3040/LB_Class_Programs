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
    do
    {
        cout<<"|"<<first->data<<"|"<<"<=>";
        first = first->next;
    }while(first    != last->next);

    cout<<"\n";
}

int DoublyCLL :: Count()
{
    return iCount;
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

    int iRet = Count();
    return 0;
}