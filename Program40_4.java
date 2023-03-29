// 4. Write a java program which accept number of rows and number of
// columns from user and display below pattern.
// Input : iRow = 6 iCol = 6
// Output :
//  * * * * * *
//  * # # # * *
//  * # # * $ *
//  * # * $ $ *
//  * * $ $ $ *
//  * * * * * * 



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
        int size=rows-4;
       for(int i=1;i<=rows;i++)
       {
            for(int j=1;j<=columns;j++)
            {
                if((i==1) || (j==1) || (i==rows) || (j==columns) || ((i+j)==rows+1))
                {
                    System.out.print("*\t");
                }
                else if(((i+j)>=rows-size) && ((i+j)<=columns))
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("$\t");
                }
            }
            System.out.println();
       }
    }
}
class Program40_4
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