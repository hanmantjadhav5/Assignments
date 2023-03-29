// write a program which accept name from user and print that name.

// Input : Hanmant Jadhav
// Output : Hanmant Jadhav

#include<stdio.h>

int main(){

    char Name[30];

    printf("Enter full name : ");
    scanf("%[^\n]s", &Name);

    printf("Your Name is %s ", Name);

    return 0;
}
