// Display all palindrome elements from singly  linear linked list.

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

void DisplayPalindrome(PNODE First) 
{
    if (First == NULL)
    {
        return;
    }

    while(First != NULL)
    {

        int iNo = First->data, rev_num = 0, rem = 0;

        while (iNo !=0)
        {
            rem = iNo % 10;
            rev_num = rev_num*10  + rem;             
            iNo = iNo / 10;
        }

        if (First->data == rev_num)
        {
            printf("%d is Palindrome number\n", First->data);
        }
        First = First->next;
    }
    return;
    
} 


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 414);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplayPalindrome(Head);
    
    return 0;
}