//recursive program which accept number from user and return
// smallest digit
// Input : 87983
// Output : 3 

#include<stdio.h>

int SmallestDigit(int value)
{
    static int iDigit=0,iMax=0;
    if(value!=0)
    {
        iDigit=value%10;
        if(iMax==0)
        {
            iMax=iDigit;
        }
        if(iMax>iDigit)
        {
            iMax=iDigit;
        }
        value=value/10;
        SmallestDigit(value);
    }
    return iMax;
}

int main()
{
    int no=0,iRet=0;;
    printf("Enter number: ");
    scanf("%d", &no);

    iRet=SmallestDigit(no);
    printf("Factorial is %d", iRet);
    return 0;
}