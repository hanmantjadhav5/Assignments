//  accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultFact(int iNo){
      
   int iCnt=1, iMult=1;

   if(iNo<=0){

      printf("Wrong Input");
   }

   while(iNo/2>=iCnt){

      if(iNo%iCnt==0){

         iMult=iMult*iCnt;
      }
      iCnt++;
   }
   
   return iMult;
}
int main(){

   int iValue = 0;
   int iRet = 0;

   printf("Enter number : ");
   scanf("%d",&iValue);

   iRet = MultFact(iValue);

   printf("%d",iRet);

   return 0;
}