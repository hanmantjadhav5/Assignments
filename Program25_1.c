// Write a Program which accept string from user and count number of capital characters. 

#include<stdio.h>

int CountCapital(char *str){

    int iCnt = 0;

    if (*str == '\0'){                        //filter

        return 0;
    }

    while (*str != '\0'){

        if (*str >= 'A'  && *str <= 'Z'){

            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main(){
    
    char Arr[20];
    int iRet = 0;

    printf("Enter string \n ");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Capital letters in string are %d", iRet);

    return 0;
}