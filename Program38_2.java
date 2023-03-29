// 2. Write Java program which accept String from user and display
// below pattern.
// Input : Hello
// Output :
//  H e l l o
//  H e l l
//  H e l
//  H e
//  H 

import java.lang.*;
import java.util.*;

class DisplayPattern
{
    void Pattern(String p)
    {
        int i=0,j=0;
       char arr[]=p.toCharArray();
       for(j=0;j<arr.length;j++)
       {
            for(i=0;i<arr.length-j;i++)
            {
                System.out.print(arr[i]+"\t");
            }
            System.out.println();
       }
      
    }
}
class Program38_2
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string ");
        String str=sobj.nextLine();
    
        DisplayPattern obj=new DisplayPattern();
        obj.Pattern(str);

    }
}