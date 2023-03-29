// Accept area in square feet and convert it into square meter

#include<stdio.h>

double SquareMeter(float iNo){

    return iNo*0.0929;
}

int main(){

    float iValue = 0.0;
    double fRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f", &iValue);

    fRet=SquareMeter(iValue);

    printf("Area in square meter is %f",fRet);

    return 0;
}