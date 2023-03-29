// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation

#include<stdio.h>

void DisplayAscii(){
    
    int i = 0;

    printf("_________________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________________\n");
    
    printf("Character\t Decimal\t Hex \t Octal");

    for(i = 0; i <=127; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }

    printf("\n_________________________________________________\n");
}

int main(){

    DisplayAscii();
    
    return 0;
}


