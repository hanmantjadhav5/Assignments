// recursive program which accept number from user and
// return its product of digit.
// Input : 523
// Output : 30

#include<stdio.h>

int Mult(int value)
{
    if( value==0 )
    {
        return 1;
    }
  
    return ((value%10) * Mult(value/10));
    
}
int main()
{
    int no=0;
    printf("Enter number: ");
    scanf("%d",&no);

    int iRet = Mult(no);
    printf("Product of digit is %d ", iRet);
    return 0;
}