// accept one number from user and toggle contents of first and last nibble of the number.
// Return modified number. (Nibble is a group of four bits)

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    return (No ^ 15<<28) ^ 15;
}
int main()
{
    UINT Value=0;

    printf("Enter The Number: ");
    scanf("%d",&Value);

    printf("%d",ToggleBit(Value));

    return 0;
}
