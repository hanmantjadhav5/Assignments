// Accept number from user and Toggle 7th bit of that number.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No, UINT Pos1)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    iMask = iMask << (Pos1-1);

    Result = No ^ iMask;

    return Result;
}

int main()
{
    UINT Value = 0, Position1 = 7;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value,Position1);

    printf("Toggled number is : %d\n",iRet);

    return 0;
}
