// Accept number from user and print numbers till that number


#include<stdio.h>
void Display(int iNo)
{
    for(int i= -iNo; i<=iNo; i++)
    {
        printf(" %d",i);
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}