/* write a program which accept one number from user 
   and check wether that number is grater than 100 or not.
*/

// Input : 101
// Output : Grater 

// Input : 39
// Output : smaller

#include<stdio.h>

typedef BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGrater(int iNo){

    if (iNo>100){

        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int iValue = 0;
    BOOL bRate = FALSE;

    printf("Please Enter number : ");
    scanf("%d", &iValue);

    bRate = ChkGrater(iValue);

    if (bRate == 1){

        printf("Grater");
    }
    else{
        printf("Smaller");
    }
    return 0;
}