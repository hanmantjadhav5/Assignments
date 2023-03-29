// Accept distance in KiloMetre and convert it into meter

#include<stdio.h>

int KMtoMeter(int iNo){

    return iNo*1000;
}
int main(){

    int iValue = 0,iRet=0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet= KMtoMeter(iValue);

    printf("%d Kilometer Equal to %d Meter", iValue, iRet);

    return 0;
}
