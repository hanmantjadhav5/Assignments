// Accept range from user and display all numbers in between that range

#include<stdio.h>
void RangeDisplay(int iStart, int iEnd){

    if(iStart > iEnd){

        printf("Invalid Range !!!");
    }
    else{

        for( ;iStart <=iEnd; iStart++){

            printf("%d\t",iStart);
        }
    }
}
int main(){

    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}


