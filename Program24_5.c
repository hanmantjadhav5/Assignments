/*
Accept Character from user and 
display its ASCII value in decimal, octal and hexadecimal format.

*/ 

#include<stdio.h>


void Display(char ch){

    printf("ASCII Value of character %c in decimal is     %d\n", ch, ch);
    printf("ASCII Value of character %c in octal is       %o\n", ch, ch);
    printf("ASCII Value of character %c in hexadecimal is %x\n", ch, ch);
}

int main(){

    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}