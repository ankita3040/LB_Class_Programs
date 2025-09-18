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

void DoublyCLL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        
    }
    else
    {
        first = first->next;
        delete(last->next); // delete first->prev
        first->prev = last;
        last->next = first;

    }

    iCount--;

}


void DoublyCLL :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        
    }
    else
    {
      last = last->prev;
      delete(last->next);
      first->prev = last;
      last->next = first;


    }
    iCount--;

}

void DoublyCLL :: InsertAtPos(int no,int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    if(pos < 1 || pos > iCount +1)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount + 1 )
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        temp = first;

        for(i = 0; i < pos -2; i++)
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


void DoublyCLL :: DeleteAtPos(int pos)
{
    PNODE temp = NULL;
    int i = 0;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount )
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 0; i < pos -1; i++)
        {
            temp = temp->next;
        }
       
        


        
    }

}




int main()
{

    DoublyCLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements in ll are "<<iRet<<"\n";

    dobj.InsertAtPos(105,5);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements in ll are "<<iRet<<"\n";


    dobj.DeleteFirst();
    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements in ll are "<<iRet<<"\n";
    dobj.DeleteLast();
    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements in ll are "<<iRet<<"\n";

    return 0;
}