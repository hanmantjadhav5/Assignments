// Accept number from user and return the count of odd digits


#include<stdio.h>

int CountEven(int iNo){

    int iDigit=0, iCnt=0;

    if (iNo<0){
        iNo = -iNo;
    }

    while(iNo>0){

        iDigit = iNo%10;

        if(iDigit%2!=0){

            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;
}
int main(){

    int iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    iRet=CountEven(iValue);

    printf("%d", iRet);

    return 0;
}