// Accept string and accept one character from user . Return index of first occurrence of that character

#include<stdio.h>

int FirstOccurrence(char *str, char ch){

    int iCnt = 0;

    while (*str != '\0' )
    {
        if (*str == ch)
        {
            return iCnt;
        }
        iCnt++;
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

    iRet = FirstOccurrence(Arr, cValue);

    if (iRet >= 0)
    {
        printf("First Occurrence of Character %c is at index No : %d", cValue, iRet);
    }
    else{
        printf("Character is Not Present");
    }

    return 0;
}