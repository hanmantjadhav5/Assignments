// Accept number of rows and column from the user and display below pattern.

// iRow = 4    iCol = 4

/* Output :  
              A    B    C    D
              a    b    c    d            
              A    B    C    D
              a    b    c    d
            
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{

    int ch = 0;

    for (int i = 1; i <= iRow; i++)
    {
       
        for (int j = 1,ch = 'A'; j <= iCol; j++, ch++)
        {
            if(i%2!=0)
            {
                ch=64;
                printf(" %c ",ch+j);
            }
            else
            {
                ch=96;
                printf(" %c ",ch+j);
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