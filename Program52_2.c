// Accept two numbers from user and display position of common ON(1) bits from that two numbers.

#include<stdio.h>
typedef unsigned int UINT;

void CountOne(UINT No1, UINT uNo2)
{
    int Cnt=0,j=0;

    for(int i=0; j=j+(2^i)<=No1; i++)
    {
        if(No1 & 1<<i && No1 & 1<<i)
        {
            printf("Bits ON in Common: %d \n",i+1);
        }
    }

}
int main()
{
    UINT Value1 = 0, Value2 = 0;

    printf("Enter First Number: ");
    scanf("%d",&Value1);
    printf("Enter Second Number: ");
    scanf("%d",&Value2);

    CountOne(Value1, Value2);

    return 0;
}