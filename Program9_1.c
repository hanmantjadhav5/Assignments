// Accept number from user and display below pattern

#include<stdio.h>

void Display(int iNo){
    
    if(iNo<0){

        iNo=-iNo;
    }

    for(int iCnt=1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt <=iNo){

            printf(" * ");
        }
        else{

            printf(" # ");
        }
    }
}
int main(){

    int iNo=0;

    printf("Enter The Number : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}