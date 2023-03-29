// Accept string from user and accept one character. Return index of last occurrence of that character.

#include<stdio.h>

int CountChar(char *str, char ch){

    int iCnt = 0, i = -1;

    while (*str != '\0' )
    {
        if (*str == ch)
        {
            iCnt;
        }
        str++;
        iCnt++;
    }
    return iCnt; 
}

int main(){

    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(Arr, cValue);

    if (iRet >= 0)
    {
        printf("Last Occurrence Of Character %c Is In Index No : %d",cValue,iRet);
    }
    else{
        printf("Character is Not Present");
    }
    return 0;
}