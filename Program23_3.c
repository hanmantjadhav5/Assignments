// Accept character from user and check wether it is digit or not (0-9).

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch){
    
    if ((ch >= 0) && (ch <= 9)){

        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){

    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the character ");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if ( bRet== TRUE){

        printf("It is a digit ");
    }
    else{
        printf("It not is a digit ");
    }
}
