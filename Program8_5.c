// Write a program which accept number from user and 
// display its table in reverse order

#include<stdio.h>

void TableRev(int iNo){

    if(iNo<0){

        iNo = -iNo;
    }

    for( int iCnt = 10; iCnt >= 1; iCnt--){

        printf("%d\t", iNo*iCnt);
    }
    
}
int main(){

    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
