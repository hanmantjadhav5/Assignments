// C program to reverse every node data in singly linked list.

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

int ReverseDigits(int iNo)
{
    int new_num = 0, rem;

	while (iNo != 0) 
	{
		rem = iNo % 10;
		new_num = new_num * 10 + rem;
		iNo = iNo / 10;
	}

	return new_num;
}

void DisplayReverse(PNODE First)
{
    if (First == NULL)
    {
        return;
    }

    while(First != NULL)
    {
        First->data = ReverseDigits(First->data);
        First = First->next;
    }
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

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);
    InsertFirst(&Head, 10);

    printf("Linked List before reversing individual data item \n");
	Display(Head);

	DisplayReverse(Head);

	printf("Linked List after reversing individual data item \n");
	Display(Head);
    
    return 0;
}