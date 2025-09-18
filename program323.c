//Singly linear linked list
// |10 |->| 23|->|43 |->| 101|->NULL

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

void InsertFirst(PPNODE first, int no)
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL) 
    {
        *first = newn; 
    }
    else                
    {
        newn->next = *first; 
        *first = newn;      
    
    }

}
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL)  //LL is empty
    {
        *first = newn;
    }
    else                // LL contain atleast 1 node
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp =  temp->next;
        }
        temp->next=newn;

    }

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
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

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);

    printf("Number elements in LL are %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    Display(head);

    iRet = Count(head);

    printf("Number elements in LL are %d\n",iRet);

    return 0;
}