// Accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(float iNo1,float iNo2){

    if(iNo1<iNo2 || iNo1==0){

        printf("Invalid Data");
        exit(0);
    }

    float iPer = (iNo2/iNo1) * 100.0;

    return iPer;
}

int main(){
      
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter Total Marks : ");
    scanf("%d",&iValue1);
    
    printf("Please Enter Obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage = %.2f ",fRet);

    return 0;
}