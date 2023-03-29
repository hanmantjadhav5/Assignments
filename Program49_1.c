// Check whether the 15 bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int Pos)
{
    UINT iMask = 0x00000001;
    UINT Result = 0;

    iMask = iMask << (Pos-1);

    Result = iNo & iMask;

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
    //UINT Position = 0;
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number: ");                          // Value = 29994
    scanf("%d", &Value);

    // printf("Enter the Position of bit : ");
    // scanf("%d", &Position);

    bRet = CheckBit(Value, 15);

    if (bRet == true)
    {
        printf("bit at the position 15 is ON \n");
    }
    else
    {
        printf("bit at the position 15 is OFF \n");
    }
    
    return 0;
}