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
        //Duplicate
        if(temp->next != NULL)
        {
            if(temp->next->data == no)
            {
                free(newn);
                return;
            }

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

    Display(head);
    InsertSoretedIncUnique(&head,11);
    Display(head);
    InsertSoretedIncUnique(&head,21);
    Display(head);
    InsertSoretedIncUnique(&head,71);
    Display(head);
    InsertSoretedIncUnique(&head,22);
    Display(head);
    InsertSoretedIncUnique(&head,10);
    Display(head);
    InsertSoretedIncUnique(&head,99);
    Display(head);
    InsertSoretedIncUnique(&head,71);
    Display(head);

    Display(head);
   
    return 0;
}