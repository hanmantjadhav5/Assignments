// Accept number from  user and check wether number is even or odd.

# include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo){

   if(iNo%2 == 0){

      printf("%d is even", iNo );
   }
   else{
      printf("%d is odd", iNo );
   }

}

int main(){

   int iValue = 0;
   BOOL bRet =FALSE;

   printf("Enter number : ");
   scanf("%d", &iValue);

   bRet = CheckEven(iValue);

   return 0;
}
