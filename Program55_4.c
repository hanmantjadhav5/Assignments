// recursive program which accept number from user and
// return its factorial.
// Input : 5
// Output : 120

#include<stdio.h>

long int Fact(int value)
{
    if(value==1 || value==0 )
    {
        return 1;
    }
    else
    {
        return value*Fact(value-1);
    }
}
int main()
{
    int no=0;
    printf("Enter number: ");
    scanf("%d",&no);

    long int iRet = Fact(no);
    printf("Factorial of %d is %ld ", no ,iRet);
    return 0;
}