//accept two two arrays from user and display minimum element of each array.
// Input :
//  2 9 7 5 2 3
//  9 3 5 5
// Output : 2 3 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void DisplayMinimum(int arr[],int arr1[])
    {
        // for(int brr:arr)
        // {
        //     System.out.print(brr);
        // }
        int iMin=0,iMin1=0;
        iMin=arr[0];
        for(int i=0;i<arr.length;i++)
        {
           
            if(arr[i]<iMin)
            {
                iMin=arr[i];
            }
            
        }
        System.out.print(iMin);
        iMin1=arr1[0];
        for(int i=0;i<arr1.length;i++)
        {
           
            if(arr1[i]<iMin1)
            {
                iMin1=arr1[i];
                //System.out.print("iMin= "+iMin1+"\t");
            }
        }
        System.out.print("\t"+iMin1);
    }
}
class Program42_2
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

        obj.DisplayMinimum(arr,arr1);
    }
}