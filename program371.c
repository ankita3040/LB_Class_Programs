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
        *last = newn;
        (*last)->next = *first;

         
    }

}
void DeleteFirst(PPNODE first, PPNODE last)
{

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *first = NULL;
    }
    else
    {
        
        *first = (*first)->next;
        free((*last)->next);
        (*last)->next = *first;


    }
    

}
void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next != *last)
        {
            temp = temp->next;
        }
        free(*last);
        *last = temp;
        (*last)->next = *first;   

    }

}
void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    do 
    {
        printf(" |%d|->",first->data);
        first = first->next;
    }while(first != last->next);

    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;
    if(first == NULL && last == NULL)
    {
        return iCount;
    }
    do 
    {
        iCount++;
        first = first->next;
    }while(first != last->next);

    return iCount;
}
void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;
    int iCount = 0;

    iCount = Count(*first,*last);
    
    if(pos < 1 || pos > iCount + 1)
    {
        printf("Invalid position\n");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(first,last,no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(first,last,no);
    }
    else
    {
        newn = (PNODE) malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *first;

        for(i = 0; i < pos -2; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

    }

}
void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int i = 0;
    int iCount = 0;

    iCount = Count(*first,*last);
    
    if(pos < 1 || pos > iCount )
    {
        printf("Invalid position\n");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(pos == iCount )
    {
        DeleteLast(first,last);
    }
    else
    {
        temp = *first;

        for(i = 0; i < pos -2; i++)
        {
            temp = temp->next;
        }
        target = temp->next;

        temp->next = target->next;
        free(target);
        

    }

}

int main()
{
    
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of elements in LL are : %d\n",iRet);


    InsertAtPos(&head,&tail,105,5);

    
    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of elements in LL are : %d\n",iRet);

    DeleteAtPos(&head,&tail,5);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of elements in LL are : %d\n",iRet);

    


    DeleteFirst(&head,&tail);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of elements in LL are : %d\n",iRet);

    DeleteLast(&head,&tail);


    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of elements in LL are : %d\n",iRet);


    return 0;
}