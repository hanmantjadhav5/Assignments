// accept two arrays from user and form a new array which is combination of first and second array.
// Input :
//  2 9 6 5
//  45 6 12 18 
// Output :
//  9 5 3  45 6 12 18

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void ArrayConcat(int arr[],int arr1[])
    {
        int a1 = arr.length;
        int a2 = arr1.length;
        
        int c1 = a1 + a2;
        int c[] = new int[c1];

        for(int i=0; i<a1; i=i+1)
        {
            c[i] = arr[i];
        }
        
        for(int i=0; i<a2;i=i+1)
        {
            c[a1+i] = arr1[i];
        }

        for(int i=0; i<c1;i=i+1)
        {
            System.out.print(c[i]);
            System.out.print("\t");
        }
    }

}
class Program41_4
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