// 2. Write Java program which accept number of rows and number of
// columns from user and display below pattern.
// Input : iRow = 4 iCol = 3
// Output :
//  1 2 3
//  1 2 3
//  1 2 3
//  1 2 3 

import java.lang.*;
import java.util.*;

class DisplayPattern
{
    void Pattern(int rows,int col)
    {
        int no=1;
        int i=0,j=0;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<col;j++)
            {
                System.out.print(no+"\t");
                no++;
            }
            System.out.println();
            no=1;
        }
    }
}
class Program37_2
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows");
        int row=sobj.nextInt();

        System.out.println("Enter number of column");
        int col=sobj.nextInt();

        DisplayPattern obj=new DisplayPattern();
        obj.Pattern(row,col);

    }
}