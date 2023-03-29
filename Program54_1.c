// Write a recursive program which display below pattern.
// Input : 5
// Output : * * * * * 


#include<stdio.h>
void Display(int value)
{
    
    if(value>0)
    {
        printf("*\t");
        value--;;
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