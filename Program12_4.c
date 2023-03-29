// Accept number from user and count frequency of 4 in it

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountFour(int iNo){

    int iDigit = 0 , iCnt = 0;

    while(iNo>0){

        iDigit = iNo%10;
        
        if(iDigit == 4){

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

    iRet=CountFour(iValue);

    printf("Count of Four is %d",iRet);

    return 0;
}

