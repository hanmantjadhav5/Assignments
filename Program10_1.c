//  Accept radius of circle from user and calculate its area 

#include<stdio.h>

double CircleArea(float fRadius){

    float Area = 0.0;
    float Pi = 3.14;

    return Area = (Pi*fRadius*fRadius);
}

int main(){

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %0.4f ", dRet);

    return 0;
 }


