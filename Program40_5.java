// 5. Write a java program which accept number of rows and number of
// columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :
//  1 2 3 4 5
//  1 2     5
//  1   3   5
//  1     4 5
//  1 2 3 4 5 

import java.lang.*;
import java.util.*;

class PatternMatrix
{
    void DisplayPattern(int rows,int columns)
    {
        if((rows!=columns) || (rows==0) || (columns==0))
        {
            return;
        }
       for(int i=1;i<=rows;i++)
       {
            for(int j=1;j<=columns;j++)
            {
                if((i==1) || (i==rows))
                {
                    System.out.print(j+"\t");
                }
                else if(i==j)
                {
                    System.out.print(i+"\t");
                }
                else if((j==1) || (j==columns))
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }
            System.out.println();
       }
    }
}
class Program40_5
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter numbers of rows");
        int rows=sobj.nextInt();

        System.out.println("Enter numbers of columns");
        int columns=sobj.nextInt();

        PatternMatrix obj=new PatternMatrix();

        obj.DisplayPattern(rows,columns);
    }
}