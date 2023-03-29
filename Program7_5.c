// Accept N and print five multiples of N

#include<stdio.h>

void FiveMultiply(int iNo){

    for(int iCnt=1; iCnt<=5; iCnt++){

        printf("%d\t", iCnt*iNo);
      
    }
}

int main(){

    int iValue = 0;

    printf("\n Enter Number : ");
    scanf("%d",&iValue);

    FiveMultiply(iValue);

    return 0;
}