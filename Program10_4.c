// Accept temperature in Fahrenheit and convert it into celsius

#include<stdio.h>

double FhtoCs(float fTemp){

    return ((fTemp-32)*(5.0/9.0));
}

int main(){

    float fValue=0.0;
    double fRet=0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    fRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %0.4f", fRet);

    return 0;
}
