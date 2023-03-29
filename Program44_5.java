// accept array from user and display below pattern.
// Input : 8 9 7 6 4 2 4
// Output :
//  * * * * * * * *
//  * * * * * *
//  * * * *
//  * *
//  * * * *

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void DisplayClass(int arr[])
    {
      
        int i=0;
        for(i=0;i<arr.length;i++)
        {
          if((arr[i]%2)==0)
          {
              for(int j=0;j<arr[i];j++)
              {
                  System.out.print("*\t");
              }
              System.out.println();
          }
          
        }
      
    }
}
class Program44_5
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter size of array");
        int Size=sobj.nextInt();

        int arr[]=new int[Size];

        System.out.println("enter elements one by one for first array");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.nextInt();
        }

        ArrayDemo obj=new ArrayDemo();

        obj.DisplayClass(arr);
       
    }
}