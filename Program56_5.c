
// Accept number from user and return its reverse number.
// Input : 523
// Output : 325

#include<stdio.h>

int ReverseNumber(int value)
{
    static int iDigit=0,product=0;

    if(value>0)
    {
        iDigit=value%10;
        product=(product*10)+iDigit;
        value=value/10;
       
        ReverseNumber(value);
    }
    return product;
}
int main()
{
    int no=0,iRet=0;

    printf("enter number: ");
    scanf("%d", &no);

    iRet = ReverseNumber(no);

    printf("Product of digits is %d",iRet);

    return 0;
}