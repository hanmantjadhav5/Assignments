// Accept number from user and off 7th and 10th bit of that number.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0;
    UINT Result = 0;

    iMask1 = iMask1 << (Pos1-1);
    iMask2 = iMask2 << (Pos2-1);

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iMask = iMask1 & iMask2;
    
    Result = No & iMask;

    return Result;
}

int main()
{
    UINT Value = 0, Position1 = 7, Position2 = 10;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value,Position1, Position2);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
