// 2. Write Java program which accept number of rows and number of columns
// from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output :
//  A B C D
//  a b c d
//  A B C D
//  a b c d 

import java.lang.*;
import java.util.*;

class DisplayPattern
{
    void Pattern(int rows,int col)
    {
        char ch='A';
        char ch1='a';
        int i=0,j=0;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<col;j++)
            {
                if((i%2)==0)
                {
                    System.out.print("\t"+ch);
                }
                else
                {
                    System.out.print("\t"+ch1);
                }
                
                ch++;
                ch1++;
            }
            System.out.println();
            ch='A';
            ch1='a';
        }
    }
}
class Program36_2
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