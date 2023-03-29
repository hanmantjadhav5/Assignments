// accept two arrays from user and display odd contents of each array.
// Input :
//  2 9 6 5 2 3
//  45 6 12 18 23 4
// Output :
//  9 5 3 
//  45 23 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void DisplayOdd(int arr[],int arr1[])
    {
        for(int i=0;i<arr.length;i++)
        {
            if((arr[i]%2)!=0)
            {
                System.out.print(arr[i]+"\t");
            }
            
        }
        System.out.println();
        for(int i=0;i<arr1.length;i++)
        {
            if((arr1[i]%2)!=0)
            {
                System.out.print(arr1[i]+"\t");
            }
        }
    }
}
class Program41_3
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter size of first array");
        int Size=sobj.nextInt();

        int arr[]=new int[Size];

        System.out.println("enter elements one by one for first array");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.nextInt();
        }

        System.out.println("Enter size of second array arr");
        int Size1=sobj.nextInt();

        int arr1[]=new int[Size1];

        System.out.println("enter elements one by one for second array");
        for(int i=0;i<arr1.length;i++)
        {
            arr1[i]=sobj.nextInt();
        }

        ArrayDemo obj=new ArrayDemo();

        obj.DisplayOdd(arr,arr1);
    }
}