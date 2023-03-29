// Factorial of Given number

#include<stdio.h>

int Factorial(int iNo){

    int iCnt = 0, Fact = 1;

    if (iNo<0){

        iNo = -iNo;
    }
    
    for ( iCnt = iNo; iCnt >1; iCnt--){

        Fact = Fact*iCnt;
    }
    
    return Fact;
}

int main(){

    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf(" Factorial of number is %d.",iRet);

    return 0;
}