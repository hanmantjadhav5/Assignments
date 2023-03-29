// Write a program which accept one number and position from user and toggle that bit. Return modified number

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT No,UINT Bit)
{
    return No ^ 1<<(Bit-1);
}
int main()
{
    UINT Value=0, Bit=0;

    printf("Enter The Number: ");
    scanf("%d",&Value);
    printf("Enter The Bit: ");
    scanf("%d", &Bit);

    printf("%d",OnBit(Value, Bit));

    return 0;
}
