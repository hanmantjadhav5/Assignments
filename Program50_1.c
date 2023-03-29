// Accept number from user and off 7th bit of that number.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    iMask = iMask << (Pos-1);

    iMask = ~iMask;
    
    Result = No & iMask;

    return Result;
}

int main()
{
    UINT Value = 0, Position = 7;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    //printf("Enter the position : \n");
    //scanf("%d",&Position);

    iRet = OffBit(Value,Position);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
