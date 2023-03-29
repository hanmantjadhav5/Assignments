// Accept string from user and accept one character is present in string or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch){

    while (*str != '\0' )
    {
        if (*str == ch)
        {
            return TRUE;
        }
        
        str++;
    }
    return FALSE; 
}

int main(){

    char Arr[20];
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if (bRet==TRUE)
    {
        printf("Character Found ");
    }
    else{
        printf("Character not Found");
    }

    return 0;
}