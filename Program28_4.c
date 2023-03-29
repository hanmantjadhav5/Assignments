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

int MaximumSL(PNODE First)
{
    int iMax = INT_MIN;
    
    while (First != NULL)
    {
        if ((First->data)>iMax)
        {
            iMax = First->data;    
        } 
        First = First->next;     
    }
    return iMax;
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

    InsertFirst(&Head, 240);
    InsertFirst(&Head, 320);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    Display(Head);

    iRet = MaximumSL(Head);  

    printf("Largest number from singly  linear linked list = %d", iRet);
    return 0;
}