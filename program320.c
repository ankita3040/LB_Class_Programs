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
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL)  //LL is empty 
    {
        *first = newn; // *fisrt = 100
    }
    else                // LL contain atleast 1 node
    {
        newn->next=*first; 
        *first = newn;
    
    }

}
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL)  //LL is empty
    {
        *first = newn;
    }
    else                // LL contain atleast 1 node
    {

    }

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("%d ",first->data);
        first = first->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);


    return 0;
}