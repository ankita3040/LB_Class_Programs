#include<iostream>
using namespace std;

template<class T>

struct node
{
    T data;
    struct node<T> *next;
    
};

template<class T>
class StackX
{
    private:
        struct node<T> *first;
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
    struct node<T> * newn = NULL;
    newn = new struct node<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first= newn;

    iCount++;


}

template<class T>
T StackX<T> ::  pop()    // Deletefirst
{
    struct node<T> *temp;
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
    struct node<T> *temp = NULL;
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
    StackX<double> * sobj = new StackX<double>();

    double iRet = 0;

    sobj->push(10.11);
    sobj->push(20.21);
    sobj->push(30.32);
    sobj->push(40.91);

    sobj->display();

    iRet = sobj->Count();

    cout<<"Number of elements in stack are "<<iRet<<"\n";


    iRet = sobj->pop();

    cout<<"Popped element from stack is"<<iRet<<"\n";
    iRet = sobj->pop();

    cout<<"Popped element from stack is"<<iRet<<"\n";


    sobj->display();

    iRet = sobj->Count();

    cout<<"Number of elements in stack are "<<iRet<<"\n";

    delete sobj;
    
    return 0;

}