// accept one number from user and count number ON(1) bits in it without using % and / operator.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT CountOne(UINT No)
{
    UINT iCnt = 0;

    while (No)
    {
        iCnt = iCnt + (No & 1);
        No = No >> 1;
    }
    return iCnt;
}
int main()
{
    UINT Value;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%d", &Value);
    
    iRet = CountOne(Value);

    printf("Number of On(1) bit in number are : %d", iRet);

    return 0;
}