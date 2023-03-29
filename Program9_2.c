// Accept amount in US dollar and return its corresponding value in Indian currency.
// Consider 1 $ as 70 rupees

#include<stdio.h>

int DollarToINR(int iNo){

    return (iNo*70);
}
int main(){

    int iDollar=0,iRet=0;

    printf("Enter Total Number Of Dollar(s) : ");
    scanf("%d", &iDollar);

    iRet = DollarToINR(iDollar);

    printf("%d Dollar(s) Corresponding Value In Indian Currency is %d\n",iDollar,iRet);

    return 0;
}
