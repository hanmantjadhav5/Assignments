//program which returns second maximum elements from singly  linear linked list.


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
typedef struct node ** PPNODE;

void SecMaximum(PNODE First)
{
    int i, first, second;
  
    first = second = INT_MIN;
 
    PNODE temp = First;
 
    while (temp != NULL) 
    {
        if (temp->data > first) 
        {
            second = first;
            first = temp->data;
        }
        else if (temp->data > second && temp->data != first)
        {
            second = temp->data;
        }            
        temp = temp->next;
    }
 
    if (second == INT_MIN)
    {
        printf("There is no second largest element\n");
    }
    else
    {
        printf("The second largest element is %d ", second);
    }   
}


void InsertFirst(PPNODE head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL) 
    {
        *head = newn;
    }
    else                
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements from the Linked List are : \n");

    while(head != NULL)
    {
        printf("| %d |-> ",head->data);
        head = head -> next;
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

    SecMaximum(Head);

    return 0;
}