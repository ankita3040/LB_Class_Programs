#include<iostream>
using namespace std;

template<class T>
struct DoublyCLLnode
{
    T data;
    struct DoublyCLLnode<T> *next;
    struct DoublyCLLnode<T> *prev;
};

template<class T>
class DoublyCLL
{
    private:
        struct DoublyCLLnode<T> * first;
        struct DoublyCLLnode<T> * last;
        int iCount;
    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};

template<class T>
DoublyCLL<T> :: DoublyCLL()
{
    cout<<"Inside constrcutor\n";
    first = NULL;
    last = NULL;
    iCount = 0;

}

template<class T>
void DoublyCLL<T> :: InsertFirst(T no)
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new DoublyCLLnode<T>;
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

template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    struct DoublyCLLnode<T> * newn = NULL;

    newn = new DoublyCLLnode<T>;
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

template<class T>
void DoublyCLL<T> :: Display()
{
    struct DoublyCLLnode<T> *temp = NULL;
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

template<class T>
int DoublyCLL<T> :: Count()
{
    return iCount;
}

template<class T>
void DoublyCLL<T> :: DeleteFirst()
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

template<class T>
void DoublyCLL<T> :: DeleteLast()
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
template<class T>
void DoublyCLL<T> :: InsertAtPos(T no,int pos)
{
    struct DoublyCLLnode<T> * newn = NULL;
    struct DoublyCLLnode<T> * temp = NULL;
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
        newn = new DoublyCLLnode<T>;
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

template<class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    struct DoublyCLLnode<T> * temp = NULL;
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

       for(i = 0; i < pos -2; i++)
       {
             temp = temp->next;
       }

       temp->next = temp->next->next;
       delete(temp->next->prev);
       temp->next->prev = temp;
       iCount--; 
    }
   

}




int main()
{

    DoublyCLL<int> dobj;
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

    dobj.DeleteAtPos(5);

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