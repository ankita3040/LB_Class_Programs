#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct  node *next;  
}NODE, *PNODE,**PPNODE;

//Node get inserted in inxresing order
void InsertSoretedInc(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    //First element
    if(*first == NULL)
    {
        *first = newn;
    }
    //Second onwards
    else
    {
        // if it is smallest than first element
        if(no < (*first) ->data)
        {
            newn->next = *first;
            *first = newn;
            return;
        }
        temp = *first;

        while (temp->next != NULL)
        {
            if((temp->data < no) && (temp->next->data > no))
            {
                break;
            }
            temp = temp->next;
        }
        
        // If it is greater that last element
        if(temp->next == NULL && no > temp->data)
        {
            
            temp->next = newn;
            return;
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

    InsertSoretedInc(&head,11);
    InsertSoretedInc(&head,21);
    InsertSoretedInc(&head,71);
    InsertSoretedInc(&head,22);
    InsertSoretedInc(&head,10);
    InsertSoretedInc(&head,10);
    InsertSoretedInc(&head,99);

    Display(head);
    return 0;
}