/*
Accept character from user. 
If it is capital then display all the characters from the input characters till Z. 
If input character is small then print all the characters in reverse order till a.
In other case return directly. 
*/ 

#include<stdio.h>
void Display(char ch){
    
    if( ch < 'a'){

        for(  ; ch <= 'Z'; ch++){

            printf("%c\t", ch);
        }
    }
    else{
        
        for(  ; ch >= 'a'; ch--){

            printf("%c\t", ch);
        }
    }
    return;
}

int main(){

    char cValue = 0;

    printf("Enter the character ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}