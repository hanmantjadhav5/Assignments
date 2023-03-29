// Accept number of rows and column from the user and display below pattern.

// iRow = 4    iCol = 5

/* Output :  
              1    2    3    4    5
              6    7    8    9    10           
              11   12   13   14   15

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 1;

    for (int i = 1; i <= iRow ; i++)
    {
        for (int j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t", iCnt);
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