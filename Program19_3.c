// Accept number of rows and column from the user and display below pattern.

// iRow = 3    iCol = 4
/* Output :  
              5    4    3    2   1
              5    4    3    2   1
              5    4    3    2   1
            
*/
#include<stdio.h>

void Pattern(int iRow, int iCol){
    
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = iCol ; j >= 1; j--)
        {
            printf("\t%d\t", j);
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