// Accept number of rows and column from the user and display below pattern.

// iRow = 4    iCol = 4
/* Output :  
              1    1    1    1
              2    2    2    2 
              3    3    3    3 
              4    4    4    4            
*/
#include<stdio.h>

void Pattern(int iRow, int iCol){
    
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1 ; j <= iCol; j++)
        {
            printf("\t%d\t", i);
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


