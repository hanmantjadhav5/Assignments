// 3. Write Java program which accept number of rows and number of columns
// from user and display below pattern.
// Input : iRow = 3 iCol = 5
// Output :
//  A A A A A
//  B B B B B 
//  C C C C C 

import java.lang.*;
import java.util.*;

class DisplayPattern
{
    void Pattern(int rows,int col)
    {
        char ch='A';
        int i=0,j=0;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<col;j++)
            {
                System.out.print("\t"+ch);
                
            }
            System.out.println();
            ch++;
        }
    }
}
class Program36_3
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