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

    iCount = Count(*first);

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

        temp->next = target->next;
        target->next->prev = temp;
        free(target);
        
    }

}


int main()
{
    PNODE head = NULL;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("--------------------------------------------------------------------------------------------\n");
    printf("--------------------------------Doubly Linear Linked List-----------------------------------\n");
    printf("--------------------------------------------------------------------------------------------\n");
    while(1)
    {
        printf("--------------------------------------------------------------------------------------------\n");
        printf("----------------------------Please select the option----------------------------------------\n");
        printf("--------------------------------------------------------------------------------------------\n");


        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete new node at first position\n");
        printf("5 : Delete new node at last position\n");
        printf("6 : Delete new node at given position\n");
        printf("7 : Display all nodes in Linked List\n");
        printf("8 : Count number of nodes in LL \n");
        printf("0 : Terminate the application\n");
        printf("---------------------------------------------------------------------------------------------\n");

        scanf("%d",&iChoice);

        if(iChoice == 1)
        {
            printf("Enter the data that you want insert: \n");
            scanf("%d",&iValue);

            InsertFirst(&head,iValue);
        }

        else if(iChoice == 2)
        {
            printf("Enter the data that you want insert: \n");
            scanf("%d",&iValue);

            InsertLast(&head,iValue);
        }
        else if(iChoice == 3)
        {
            printf("Enter the data that you want insert: \n");
            scanf("%d",&iValue);

            printf("Enter the position at which  you want insert new node: \n");
            scanf("%d",&iPos);

            InsertAtPos(&head,iValue,iPos);
        }
        else if(iChoice == 4)
        {
            printf("Deleting first element from LL : \n");

            DeleteFirst(&head);
        }

        else if(iChoice == 5)
        {
            printf("Deleting last element from LL : \n");

            DeleteLast(&head);
        }
        else if(iChoice == 6)
        {
            printf("Deleting nodes at given position element from LL : \n");

            printf("Enter the position at which  you want delete the node : \n");
            scanf("%d",&iPos);
        
            DeleteAtPos(&head,iPos);
        }
        else if(iChoice == 7)
        {
            printf("Elements of the  LL are : \n");

            Display(head);
        }
        else if(iChoice == 8)
        {
            iRet = Count(head);
            printf("Number of element in LL are %d  \n",iRet);
            
        }
        else if(iChoice == 0)
        {
            printf("Thank you for using application\n");
            break;
        }
        else
        {
            printf("Invalid Input\n");
        }
        
        printf("-------------------------------------------------------------------------------------------------\n");

    }
    return 0;
}