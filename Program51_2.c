// accept one number and position from user and off that bit. Return modified number

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT No,UINT Bit)
{
    Bit = ~(1<<(Bit-1));

    return (No & Bit);
}
int main()
{
    UINT Value = 0, Bit = 0;

    printf("Enter The Number: ");
    scanf("%d",&Value);
    printf("Enter The Bit: ");
    scanf("%d",&Bit);

    printf("Updated number: %d",OffBit(Value, Bit));

    return 0;
}
