// accept one number and position from user and
// check whether bit at that position is on or off.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT No,UINT Bit)
{
    if(No>>(Bit-1) & 1)
    {
        return true;
    }
    return false;
}
int main()
{
    UINT Value = 0, Bit = 0;
    UINT iRet = false;

    printf("Enter number: ");
    scanf("%d", &Value);
    printf("Enter the Bit position : ");
    scanf("%d", &Bit);

    iRet = ChkBit(Value, Bit);

    if(iRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
