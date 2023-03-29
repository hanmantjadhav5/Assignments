// program which returns Largest number from singly  linear linked list 

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


int MinimumSL(PNODE First)
{
    int iMin = INT_MAX;          

    while (First != NULL)
    {
        if ((First->data)<iMin)
        {
            iMin = First->data;    
        } 
        First = First->next;     
    }
    return iMin;
}

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while (First != NULL)
    {
        printf("| %d |-> ", First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 640);
    InsertFirst(&Head, 240);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    Display(Head);

    iRet = MinimumSL(Head);  

    printf("smallest number from singly  linear linked list = %d", iRet);
    return 0;
}