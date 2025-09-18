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

        if(temp->next == NULL && temp->data == no)
        {
            free(newn);
            return;
        }
        if(temp->next != NULL)
        {
            if((temp->data == no) ||(temp->next->data == no))
            {
                free(newn);
                return;
            }

        }

            newn->next = temp->next;
            temp->next = newn;

    }

}

int MiddleElement(PNODE first)
{
    int iCount = 1, middle = 0;
    PNODE temp = first;

    if(first == NULL)
    {
        return -1;
    }
    while (temp)
    {
       iCount++;
       temp = temp->next;
    }

    middle = iCount / 2;
   
    printf("Middle index is %d \n",middle);

    for(iCount = 1; iCount < middle; iCount++)
    {
        first = first->next;
    }

    return first->data;
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

    int iRet = 0;
     
//    InsertSoretedIncUnique(&head,11);


    Display(head);

    iRet = MiddleElement(head);

    printf("Middle elements is %d\n",iRet);
    return 0;
}