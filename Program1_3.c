// Program to print 5 to 1 number on screen.

#include<stdio.h>

void Display(){

   for(int iCnt = 5; iCnt > 0; iCnt--){

      printf("%d\t", iCnt);
   } 

}

int main(){

   Display();

   return 0;
}