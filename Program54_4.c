// Write a recursive program which display below pattern.
// Input : 6
// Output : A B C D E F 




#include<stdio.h>

void Display(int value)
{
    static char ch='A';
    if(value>0)
    {
        printf("%c\t",ch);
        ch++;
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