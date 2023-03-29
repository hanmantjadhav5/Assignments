// 5.Write a recursive program which display below pattern.
// Input : 6
// Output : a b c d e f 

#include<stdio.h>


void Display(int value)
{
    static char ch='a';
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
    printf("enter number:\t");
    scanf("%d",&no);
    Display(no);
    return 0;
}