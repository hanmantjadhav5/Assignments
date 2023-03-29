// Write a program whiArr accept string from user and convert it into upper case.

#include<stdio.h>

void StrUpper(char * str)
{
    while(*str!='\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str-32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^\n]s", Arr);

    StrUpper(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}