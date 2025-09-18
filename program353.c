#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last)->next = *first;
    }
    else
    {
        newn->next = *first;
        *first = newn;
        (*last)->next = *first;
    }
    

}
void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

        (*last)->next = *first;
    }
    else
    {
        (*last)->next = newn;
         
    }

}
void DeleteFirst(PPNODE first, PPNODE last)
{

}
void DeleteLast(PPNODE first, PPNODE last)
{

}
void Display(PNODE first, PNODE last)
{
    PNODE temp = NULL;
    temp = first;

    do 
    {
        printf(" |%d|->",temp->data);
        temp = temp->next;
    }while(temp != last->next);

}

int Count(PNODE first, PNODE last)
{
    return 0;
}
void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{

}
void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{

}

int main()
{
    
    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);

    return 0;
}