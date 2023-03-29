// Accept number from user and check whether it contains 0 in it or not


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo){

    int iDigit = 0;

    while(iNo >0){

        iDigit=iNo%10;
        
        if(iDigit == 0){

            return 1;
        }

        iNo = iNo/10;
    }
    return 0;
}
int main(){

    int iValue=0;
    BOOL bRet=0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet==TRUE){

        printf("It Contains Zero");
    }
    else{

        printf("There is No Zero");
    }
    return 0;
}