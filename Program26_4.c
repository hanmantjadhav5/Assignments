// Write a program which accept string from user and display only digits from that string.

#include<stdio.h>

int DisplayDigit(char *str)
{
    int num = '\0';

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            num=(num*10)+(*str-'0');
        }
        str++;
    }
    return num;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^\n]s", Arr);

    
    iRet = DisplayDigit(Arr);

    printf("Modified string is %d", iRet);
    
    return 0;
}
