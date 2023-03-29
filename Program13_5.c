// Accept number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>

int DiffEvenOdd(int iNo){

    int iDigit=0, iEven=0, iOdd=0;

    while(iNo>0){

        iDigit = iNo%10;

        if(iDigit%2==0){

            iEven = iEven+iDigit;
        }
        else{
            iOdd = iOdd+iDigit;
        }
        iNo = iNo/10;
    }
    return iEven-iOdd;
}
int main(){

    int iValue=0, iRet=0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = DiffEvenOdd(iValue);

    printf("%d", iRet);

    return 0;
}