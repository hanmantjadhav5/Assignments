// Accept one number from user and check whether 9th or 12th bit is on or off.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT CheckBit(UINT No)
{
    if(No & 1<<8 || No & 1<<11)
    {
        return true;
    }
    return false;
}
int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter First Number: ");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if (bRet == true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}