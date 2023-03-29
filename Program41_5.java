// accept two arrays from user and display summation of each array.
// Input :
//  1  2  3
//  4  5  6 
// Output :
//  Sum of first array : 6
//  Sum of second array : 15

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void ArrayConcat(int arr[],int arr1[])
    {
        int sum1 =0, sum2 =0;

        for(int i=0; i<arr.length; i++)
        {
            sum1 = sum1+arr[i];
        }
        System.out.println("Sum of first array : "+sum1);
        
        for(int i=0; i<arr1.length;i=i+1)
        {
            sum2 = sum2+arr1[i];
        }
        System.out.println("Sum of second array : "+sum2);
    }

}
class Program41_5
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

        obj.ArrayConcat(arr,arr1);
   
    }
}