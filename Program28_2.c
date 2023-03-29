// search last occurrence of particular element from singly  linear linked list.

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int SearchLastOcc(PNODE First, int no)
{
    int iCnt = 0, temp=0;
    
    while (First != NULL)
    {
        if (First->data == no)
        {
            temp = iCnt;
        }
        iCnt++;
        First = First->next;
      
    } 
    return temp+1;
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

    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);

    Display(Head);

    iRet = SearchLastOcc(Head,30);     

    printf("Element is present at location %d", iRet); // iRet=6

    return 0;
}