#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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


bool CheckLoop (PNODE first)
{
    PNODE teacher = NULL;
    PNODE student = NULL;
    bool bFlag = false;

    teacher = first;
    student = first;

    while(teacher != NULL && teacher->next != NULL)
    {
        teacher = teacher->next->next;
        student = student->next;

        if(teacher == student)
        {
            bFlag = true;
            break;
        }
    }


    return bFlag;
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
    bool bRet = false;
     
    PNODE last = NULL;
    PNODE temp = NULL;

    InsertSoretedIncUnique(&head,11);
    InsertSoretedIncUnique(&head,21);
    InsertSoretedIncUnique(&head,51);
    InsertSoretedIncUnique(&head,101);
    InsertSoretedIncUnique(&head,111);
    InsertSoretedIncUnique(&head,121);

    last = head->next->next->next->next->next;
    temp = head->next->next;

    last->next = temp;
   // Display(head);

    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Lopp is there \n");
    }
    else
    {
        printf("Loop is not there\n");
    }
    return 0;
}