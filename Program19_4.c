// Accept number of rows and column from the user and display below pattern.

// iRow = 3    iCol = 4

/* Output :  

              *    #    *    #   
              *    #    *    #
              *    #    *    #             
*/
#include<stdio.h>

void Pattern(int iRow, int iCol){
    
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol/2; j++)
        {
            printf("*\t");
            printf("#\t");
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

