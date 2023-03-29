/*
Accept Character from user and 
check whether it is special symbol or not
( !,  @,  #,  $,  %,  ^,  &, *)
*/ 

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch){

    if ( (ch>= '0' && ch<= '9') || (ch>= 'A' && ch<= 'Z') || (ch>= 'a' && ch<= 'z'))
    {
        return FALSE;
    }
    else{

        return TRUE;
    } 
}

int main(){

    char ch = '\0';
    BOOL bRet = 0;

    printf("Enter the Character : ");
    scanf("%c", &ch);

    bRet=ChkSpecial(ch);

    if (bRet == TRUE){
        
        printf("It is Special Symbol" );
    }
    else{

        printf("It is not a Special Symbol");
    }

    return 0;
}