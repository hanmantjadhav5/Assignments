// Check whether the 5th and 18th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT iMask1 = 0X00000001;   
    UINT iMask2 = 0X00000001; 

    UINT iMask = 0;
    UINT Result = 0;

    iMask1 = iMask1 << (Pos1 -1);  
    iMask2 = iMask2 << (Pos2 -1); 

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
    UINT Position1 = 5, Position2 = 18;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value,Position1, Position2);

    if(bRet == true)
    {
        printf("Bit at the position 5 & 18 is ON\n");
    }
    else
    {
        printf("Bit at the position 5 & 18 is OFF\n");
    }
    return 0;
}
