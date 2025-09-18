#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct  node *next;  
}NODE, *PNODE,**PPNODE;

//Node get inserted in inxresing order
void InsertSoretedIncUnique(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    //First element
    if(*first == NULL || no < (*first) ->data)
    {
        newn->next = *first;
        *first = newn;
    }
    //Second onwards
    else
    {
        temp = *first;

        while ((temp->next != NULL) && (temp->next->data < no))
        {
            temp = temp->next;
        }
      
        newn->next = temp->next;
        temp->next = newn;


    }

}
void Display(PNODE first)
{
    while (first)
    {
       printf("| %d |->",first->data);
       first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertSoretedIncUnique(&head,11);
    InsertSoretedIncUnique(&head,21);
    InsertSoretedIncUnique(&head,71);
    InsertSoretedIncUnique(&head,22);
    InsertSoretedIncUnique(&head,10);
    InsertSoretedIncUnique(&head,99);

    Display(head);
    return 0;
}