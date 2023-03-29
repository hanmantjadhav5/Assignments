// Write a program which accept string from user and display it inn reverse order

#include<stdio.h>

int Reverse(char * str)
{
    char *str1 = str;
    char temp='\0';

    if(*str=='\0')
    {
        return -1;
    }
    
    
    while(*str!='\0')
    {
        str++;
    }
    str = str-1;

    while(str1 < str)
    {
        temp = *str1;
        *str1 = *str;
        *str = temp;
        str--;
        str1++;
    }
    return 0;
        
}


int main()
{
    char Arr[20]="\0";
    int iRet=0;

    printf("Enter The String : ");
    scanf("%[^\n]s",Arr);

    iRet= Reverse(Arr);
    
    printf("Reverse string is : %s\n", Arr);

    return 0;
}


    
    