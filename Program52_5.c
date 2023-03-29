/* Accept one number from user and range of positions from user.
   Toggle all bits from that range
*/ 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ChkBit(UINT No, int iStart, int iEnd)
{
    for(;iStart<=iEnd;iStart++)
    {
        No= No ^ 1<<iStart-1;
    }
    return No;
}

int main()
{
    UINT Value = 0, iStart = 0, iEnd = 0;
    UINT iRet = 0;

    printf("Enter The Number: ");
    scanf("%d", &Value);
    printf("Enter First Position: ");
    scanf("%d",&iStart);
    printf("Enter Second Position: ");
    scanf("%d",&iEnd);
    
    iRet = ChkBit(Value, iStart, iEnd);       // (897, 9, 13)
    
    printf("Updated number is : %d", iRet);
    
    return 0;
}
