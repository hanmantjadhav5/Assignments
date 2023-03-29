// Accept one number from user and print that number of even numbers on screen.

#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0){
      
      return;
   }
   
    int n=1, c=1;

    while(c <= iNo)
    {
        if(n%2 == 0)
        {
            c = c+1;
            printf("%d\n",n);
        }
        n++;
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

// Input: 7
// output 2  4  6  8  10  12  14