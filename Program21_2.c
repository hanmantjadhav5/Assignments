// Accept number of rows and column from the user and display below pattern.

// iRow = 4    iCol = 5

/* Output :  
              2    4    6    8    10
              1    3    5    7    9
              2    4    6    8    10
              1    3    5    7    9

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int Ch=1;
 
    for(int i=1; i<=iRow; i++)
    {
        for(int j=1,Ch=1; j<=iCol; j++)
        {
            if(i%2!=0)
            {
                printf(" %d ",2*j);
            }
            else
            {
                printf(" %d ",(Ch%2==0)?++Ch:Ch );
                Ch++;
            }

        }
        printf("\n");
    }
}

int main(){
    
    int iValue1 = 0, iValue2 =0;

    printf("Enter number of Row and Column : ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}