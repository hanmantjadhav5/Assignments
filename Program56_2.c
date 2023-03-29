// accept number from user and return largest digit
// Input : 87983
// Output : 9 

#include<stdio.h>

int LargestDigit(int value)
{
    static int iDigit=0,iMax=0;
    if(value!=0)
    {
        iDigit=value%10;
        if(iMax==0)
        {
            iMax=iDigit;
        }
        if(iMax<iDigit)
        {
            iMax=iDigit;
        }
        value=value/10;
        LargestDigit(value);
    }
    return iMax;
}

int main()
{
    int no=0, iRet=0;
    printf("Enter number: ");
    scanf("%d", &no);
    
    iRet = LargestDigit(no);
    printf("Largest Digit is: %d", iRet);

    return 0;
}