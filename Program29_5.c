// program which display addition of digits of elements from singly  linear linked list.

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
typedef struct node ** PPNODE;

void SumDigit(PNODE First, int iNo)
{   

    int sum = 0;

    while (iNo != 0) 
    {
        sum = sum + (iNo % 10);
        iNo = (iNo / 10);
        
    }
    printf("%d\t ", sum);

}

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
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
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
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
    
    SumDigit(Head,110);
    SumDigit(Head,230);
    SumDigit(Head,20);
    SumDigit(Head,240);
    SumDigit(Head,640);


    return 0;
}