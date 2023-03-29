// Accept division of student from user and depends on the division display exam timing

#include<stdio.h>

void ChDiv(char ch){
    
    if (ch=='a' || ch=='A'){

        printf("Your Exam At 07.00 AM");
    }
    else if (ch=='b' || ch=='B')
    {
        printf("Your Exam At 08.30 AM");
    }
    else if (ch=='c' || ch=='C')
    {
        printf("Your Exam At 09.20 AM");
    }
    else if (ch=='d' || ch=='D')
    {
        printf("Your Exam At 10.30 AM");
    }
    else{
        printf("Invalid Division !!!....Please Enter Correct Division");
    }
}

int main(){

    char cValue = 0;
    float bRet = 0.0;

    printf("Enter the character ");
    scanf("%c", &cValue);

    ChDiv(cValue);

    return 0;
}