// Accept string from user reverse that string in place.

#include<stdio.h>

void StrRev(char *str)
{
    char temp = '\0';
    char *str1= NULL;

    str1 = str;

    while(*str != '\0')
    {
        str++;
    }
    str = str-1;

    while(str1 < str)
    {
        temp = *str1;
        *str1= *str;
        *str = temp;
        str1++;
        str--;
    }
    return;
}

int main(){

    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);

    StrRev(Arr);

    printf("Modified string is : %s ", Arr);
    
    return 0;
}