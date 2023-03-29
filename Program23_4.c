// Accept character from user and check wether it is small case or not (a-z).

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch){
    
    if ((ch >= 'a') && (ch <= 'z')){

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

        printf("It is in a small case ");
    }
    else{
        printf("It is not in small case ");
    }
}