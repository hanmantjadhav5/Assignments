//program which display largest digits of all element  from singly  linear linked list.

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

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
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
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }

    printf("NULL\n");
}

void DisplayLarge(PNODE First)
{
    int iDigit = 0, iMax = 0;

    while(First != NULL)
    {
        while(First->data != 0)
        {
            iDigit = First->data % 10;
            First->data = First->data / 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
        }

        printf("%d\t",iMax);
        iMax = 0;
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 419);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplayLarge(Head);

    return 0;
}