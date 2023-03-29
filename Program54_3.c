// Write a recursive program which display below pattern.
// Input : 5
// Output : 5 4 3 2 1 


#include<stdio.h>



void Display(int value)
{
   
    if(value>0)
    {
        printf("%d\t",value);
        value--;
        Display(value);
    }
}
int main()
{
    int no=0;
    printf("Enter number:\t");
    scanf("%d",&no);
    Display(no);
    return 0;
}