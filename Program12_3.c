// Accept number from user and count frequency of 2 in it

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountTwo(int iNo)
{
    int iDigit = 0, iCnt=0;

    while(iNo > 0){

        iDigit = iNo%10;
        
        if(iDigit == 2){

            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0, bRet=0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    bRet=CountTwo(iValue);

    printf("Count of Two is %d in given number",bRet);

    return 0;
}
