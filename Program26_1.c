// Write a program which accept string from user and convert it into lower case

#include<stdio.h>

void StrLower(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = "\0";

    printf("Enter The String : \n");
    scanf("%[^\n]s", Arr);
    
    StrLower(Arr);

    printf("Modified string is : %s", Arr);

    return 0;
}