// Program which returns difference between Even factorial 
// and odd factorial of given number

// input : 5
// output: -7   (8-15)

// input : -5
// output: -7   (8-15)

// input : 10
// output: 2895   (3840-945)

#include<stdio.h>
int FactorialDiff(iNo){

    int iCnt = 0,iEvnFact = 1,iOddFact = 1;

    if(iNo<0){

        iNo=-(iNo);
    }

    for(iCnt=2; iCnt <= iNo; iCnt++){

        if(iCnt%2!=0){
            
            iOddFact = iOddFact*iCnt;
        }
        else{
            iEvnFact = iEvnFact*iCnt;
        }
    }
    return iEvnFact-iOddFact;
}

int main()
{
    int iValue=0, iRet = 0;

    printf("Enter The Value => ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is %d", iRet);

    return 0;
}