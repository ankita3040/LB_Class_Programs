//Singly linear linked list
// |10 |->| 23|->|43 |->| 101|->NULL

#include<stdio.h>

struct node
{
    int data;
    struct node *next;// self referential structure


};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    struct node *head = NULL;
    return 0;
}