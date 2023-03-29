// Find Odd Factorial of Number

// input : 5
// Output: 15   (5*3*1)

// input : -5
// Output: 15   (5*3*1)

// input : 10
// Output: 945   (9*7*5*3*1)

int OddFactorial(int iNo){

    int iCnt = 0, iFact = 1;

    if(iNo<0){

        iNo=-(iNo);
    }

    for ( iCnt = 1; iCnt <= iNo ; iCnt++){

        if (iCnt%2  != 0){
            
            iFact=  iFact*iCnt;    
        }
    }
    return iFact;
}

int main(){

    int iValue=0, iRet =0;

    printf("Enter The Value : ");
    scanf("%d", &iValue);
    
    iRet = OddFactorial(iValue);

    printf("Odd Factorial of %d is %d", iValue, iRet );

    return 0;
}


