// Write a recursive program which display below pattern.
// Input : 5
// Output : 1 2 3 4 5 


#include<stdio.h>

void Display(int value)
{
    static int i=1;
    if(i<=5)
    {
        printf("%d\t",i);
        i++;
        Display(value);
    }
}
int main()
{
    int no=0;
    printf("enter number: ");
    scanf("%d",&no);
    Display(no);
    return 0;
}