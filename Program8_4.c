// Print the table of inputted number

#include<stdio.h>

void Table(int iNo){

    if(iNo<0){

        iNo = -iNo;
    }

    for( int iCnt = 1; iCnt <= 10; iCnt++){

        printf("%d\t", iNo*iCnt);
    }
    
}
int main(){

    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}