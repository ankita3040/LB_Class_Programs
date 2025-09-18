#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;                     //$
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->prev = NULL;                      // $
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;                  //$
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->prev = NULL;                      // $
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        newn->prev = temp;                      //$
        temp->next = newn;

    }

}

void InsertAtPos(PPNODE first, int no, int pos)
{

}

void DeleteFirst(PPNODE first)
{

    // without temp 

    if(*first == NULL)
    {
        return;
    }
    if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        *first = (*first)->next;
         free((*first)->prev);
         (*first)->prev = NULL;                        
        

    }

}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    { 
 

    }

}

void DeleteAtPos(PPNODE first, int pos)
{

}

void Display(PNODE first)
{
    printf("NUll <=> ");
    while(first != NULL)
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }
    printf("NUll\n");
    
    
}

int Count(PNODE first)
{   
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
     
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    
    Display(head);

    iRet = Count(head);

    printf("Number of elements in Doubly LL is %d\n",iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of elements in Doubly LL is %d\n",iRet);

/*
    DeleteLast(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of elements in Doubly LL is %d\n",iRet);

  */   

    return 0;
}