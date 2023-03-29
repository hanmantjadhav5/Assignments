// Accept range from user and return addition of all numbers in between that range

#include<stdio.h>
void RangeSum(int iStart, int iEnd){

    if(iStart > iEnd || iStart< 0){

        printf("Invalid Range !!!");
    }
    else{

        int iSum = 0;

        for( ;iStart <=iEnd; iStart++){

             if(iStart%2==0){

                iSum = iSum+iStart;
            }
        }
        printf("%d\t",iSum);
    }
}
int main(){

    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeSum(iValue1, iValue2);

    return 0;
}
