//  Accept number from user and print that number of dollar and star sign on screen

#include<stdio.h>

void Pattern(int iNo){

    if (iNo<0){

        iNo=-(iNo);
    }
    
    for ( int iCnt = 1; iCnt <= iNo; iCnt++){

        printf(" $ *\t");
    }
}
int main(){

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}