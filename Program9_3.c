// Find Even Factorial of Number

// input : 5
// Output: 8   (4*2)

// input : -5
// Output: 8   (4*2)

// input : 10
// Output: 3840   (10*8*6*4*2)

int EvenFactorial(int iNo){

    int iCnt = 0, iFact = 1;

    if(iNo<0){
        
        iNo=-(iNo);
    }

    for ( iCnt = 1; iCnt <= iNo ; iCnt++){

        if (iCnt%2 == 0){
            
            iFact=  iFact*iCnt;    
        }
    }
    return iFact;
}

int main(){

    int iValue=0, iRet =0;

    printf("Enter The Value : ");
    scanf("%d", &iValue);
    
    iRet = EvenFactorial(iValue);

    printf("\nEven Factorial of number is %d", iRet );

    return 0;
}