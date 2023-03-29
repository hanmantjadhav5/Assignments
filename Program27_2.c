// Accept string from user and accept one character. Return frequency of that character.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CountChar(char *str, char ch){

    int iCnt = 0;

    while (*str != '\0' )
    {
        if (*str == ch)
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt; 
}

int main(){

    char Arr[20];
    char cValue='\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(Arr, cValue);

    if (iRet == 0)
    {
        printf("Character not Found ");
    }
    else{
        printf("Frequency of Character %c is %d ", cValue, iRet);
    }

    return 0;
}