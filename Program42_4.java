// accept two array from user and copy the contents of that array into another array and return new array. 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    int[] DisplayCombination(int arr[],int arr1[])
    {
        int Size=arr.length+arr1.length;
        int brr[]=new int[Size];
        int j=0;
        for(int i=0;i<arr.length;i++)
        {
            brr[j]=arr[i];
            j++;
        }
        System.out.println();
        for(int i=0;i<arr1.length;i++)
        {
            brr[j]=arr1[i];
            j++;
        }
        // System.out.println("Elements of newely formed array is");
        // for(int i=0;i<brr.length;i++)
        // {
        //     System.out.print(brr[i]+"\t");
        // }
        return brr;
    }
}
class Program42_4
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

        int size2=arr.length+arr1.length;
        int brr[]=new int[size2];
        brr=obj.DisplayCombination(arr,arr1);

         System.out.println("Elements of newely formed array is");
        for(int i=0;i<brr.length;i++)
        {
            System.out.print(brr[i]+"\t");
        }
    }
}