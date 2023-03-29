// Accept two numbers from user and display first number in second number of time.

# include <stdio.h>

void Display(int iNo, int iFrequency){

   int  iCnt = 0;

   if (iFrequency < 0){
      
      iFrequency = -(iFrequency);
   }
   
   for ( iCnt = 0; iCnt < iFrequency; iCnt++){
      
      printf("%d\t", iNo);
   } 
}


int main(){
   int iValue = 0;
   int iFreq = 0;

   printf("Enter number : ");
   scanf("%d", &iValue);
   
   printf("Enter frequency : ");
   scanf("%d", &iFreq);
   
   Display(iValue, iFreq);

   return 0;
}


// input:  12  5
// Output: 12  12  12  12  12

// input:  -2  3
// Output: -2  -2  -2

// input:  -2  0
// Output:

// input:  12  -3
// Output: 21  21  21 
