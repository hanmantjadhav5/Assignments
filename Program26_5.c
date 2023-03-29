// Write a program which accept string from user and count the number of white spaces from that string.

#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int num = 0;
    
    while(*str != '\0')
    {  
        if(*str == ' ')
        {
            num++;
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

    
    iRet = CountWhiteSpace(Arr);

    printf("White spaces in the string are %d", iRet);
    
    return 0;
}
