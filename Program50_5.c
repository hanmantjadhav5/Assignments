// Accept number from user and on its first 4 bits.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnFirst4Bits(UINT No)
{
    for(int i=0;i<4;i++)
    {
        No = No | 1<<i;
    }
    return No;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OnFirst4Bits(Value);

    printf("Toggled number is : %d\n",iRet);

    return 0;
}
