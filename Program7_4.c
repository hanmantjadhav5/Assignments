// Accepts N from user and print all odd numbers up to N

void OddDisplay(int iNo){

    for(int iCnt=1; iCnt<=iNo; iCnt++){

        if(iCnt%2!=0){

            printf(" %d\t",iCnt);
        }
    }

}

int main(){

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}