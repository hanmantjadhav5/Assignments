/*
Accept character from user. 
If character is small display - its corresponding capital character, and
if it small - then display its corresponding capital
*/ 

#include<stdio.h>
void Display(char ch){
    
    if (ch>='A' && ch<='Z'){

        printf("small character of %c is %c", ch, ch+32);
    }
    else{
        printf("Big character of %c is %c", ch, ch-32);
    }
}

int main(){

    char cValue = 0;

    printf("Enter the character ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}