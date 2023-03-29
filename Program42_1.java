// accept two arrays from user and return difference between summation of arrays.
// Input :
//  2 9 7 5 2 3
//  9 3 5 5
// Output : 6

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void DisplaySummation(int arr[],int arr1[])
    {
        int iSum=0,iSum1=0;
        for(int i=0;i<arr.length;i++)
        {
            iSum=iSum+arr[i];
        }
        System.out.println();
        for(int i=0;i<arr1.length;i++)
        {
            iSum1=iSum1+arr1[i];
        }
        int Summation=iSum-iSum1;
        System.out.println("Summation is: "+Summation);
    }
}
class Program42_1
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

        obj.DisplaySummation(arr,arr1);
    }
}