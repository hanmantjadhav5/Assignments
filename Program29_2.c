// Display all elements which are prime from singly  linear linked list.

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

 
int isPrime(int n) 
{

    // Corner cases 
    if ((n == 2) || (n == 3))
    {
        return n; 
    } 
     
 
    if (n == 1 || n % 2 == 0 || n % 3 == 0)
    {
        return -1;
    } 

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return -1; 
        }
    } 
    return n; 
} 
 
void DisplayPrime(PPNODE First) 
{
    PNODE ptr = *First;

    while(ptr != NULL) 
    {
        int p = isPrime(ptr->data);

        if (p != -1) 
        { 
            printf("%d ",p);
        }
        ptr = ptr->next; 
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

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 22);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    printf("Prime nodes are: ");

    DisplayPrime(&Head);
    
    return 0;
}