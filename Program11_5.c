// Accept accept range from user and display all numbers in between that range in reverse order

#include<stdio.h>
void RangeDisplayReverse(int iStart, int iEnd){

    if(iStart > iEnd){

        printf("Invalid Range !!!");
    }
    else{

        for( ;iStart <=iEnd; iEnd--){

            printf("%d\t",iEnd);
        }
    }
}
int main(){

    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayReverse(iValue1, iValue2);

    return 0;
}
