// 2. accept number of rows and number of
// columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :
//  * * * #
//  * * # @
//  * # @ @
//  # @ @ @


import java.lang.*;
import java.util.*;

class PatternMatrix
{
    void DisplayPattern(int rows,int columns)
    {

        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=columns;j++)
            {
                if((i+j)==rows+1)
                {
                    System.out.print("#\t");
                }
                else if((i+j)<=4)
                {
                    System.out.print("*\t");
                }
                else if((i+j)>=6)
                {
                    System.out.print("@\t");
                }
               
            }
            System.out.println();
        }
    }
}
class Program40_2
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