/* Accept one number , two positions from user and check whether 
bit at first or bit at second position is ON or OFF
*/ 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ChkBit(UINT No, int Pos1, int Pos2)
{
    if(No & 1<< Pos1 || No & 1<< Pos2)
    {
        return true;
    }
    return false;
}

int main()
{
    UINT Value = 0, iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    printf("Enter The Number: ");
    scanf("%d", &Value);
    printf("Enter First Position: ");
    scanf("%d",&iPos1);
    printf("Enter Second Position => ");
    scanf("%d",&iPos2);
    
    bRet = ChkBit(Value, iPos1, iPos2);
    
    if (bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}