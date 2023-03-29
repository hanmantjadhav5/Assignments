// Check whether the bit number 1(first) and 32(last) is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask1 = 0X00000001;   
    UINT iMask2 = 0X80000000;

    UINT iMask = 0;
    UINT Result = 0;

    iMask = iMask1 | iMask2;

    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("Bit at the position 1 and 32 is ON\n");
    }
    else
    {
        printf("Bit at the position 1 and 32  is OFF\n");
    }
    return 0;
}
