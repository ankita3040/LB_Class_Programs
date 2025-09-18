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

void DeleteFirst(PPNODE first)
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
        temp = *first;
        *first = (*first)->next;
        free(temp);
        (*first)->prev = NULL;             //$
        

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
        temp = *first;

        while(temp->next != NULL)    //change
        {
            temp = temp->next;
        }
        
        temp->prev->next = NULL;        // $
        free(temp);


    }

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

void InsertAtPos(PPNODE first, int no, int pos)
{
    int iCount  = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    if((pos < 1) || (pos > iCount + 1))
    {
        printf("Invalid position\n");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(first,no);
    }
    else
    {
        newn = (PNODE) malloc (sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next->prev = newn;    
        temp->next = newn;
        newn->prev = temp;


    }


}

void DeleteAtPos(PPNODE first, int pos)
{
    int iCount  = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((pos < 1) || (pos > iCount))
    {
        printf("Invalid position\n");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        target = temp -> next;
        
        

    }

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

    InsertAtPos(&head,105,5);

    Display(head);

    iRet = Count(head);

    printf("Number of elements in Doubly LL is %d\n",iRet);


    /*

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of elements in Doubly LL is %d\n",iRet);


    DeleteLast(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of elements in Doubly LL is %d\n",iRet);
    */

    

    return 0;
}