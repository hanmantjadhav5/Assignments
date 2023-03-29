// accept marks of N students from user and display class of each student.
// Less than 35 - Fail
// Less than 50 - Pass class
// Less than 60 - Second class
// Less than 70 - First class
// Greater than 70 - First class with Distinction
// Input : 67.3 45.8 88.9 77.5 55.2
// Output : 
//  67.3 First class
//  45.8 Pass class
//  88.9 First class with Distinction
//  77.5 First class with Distinction
//  55.2 Second class

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    void DisplayClass(float arr[])
    {
      
        int i=0;
        for(i=0;i<arr.length;i++)
        {
           if(arr[i]<35)
           {
               System.out.println(arr[i]+"\tFail");
           }
           else if((arr[i]<=50) && (arr[i]>=35))
           {
               System.out.println(arr[i]+"\tPass Class");
           }
           else if((arr[i]>=50) && (arr[i]<=60))
           {
            System.out.println(arr[i]+"\tSecond Class");
           }
           else if((arr[i]>=60) && (arr[i]<=70))
           {
            System.out.println(arr[i]+"\tFirst Class");
           }
           else if((arr[i]>=70))
           {
            System.out.println(arr[i]+"\tFirst Class with Distinction");
           }
        }
      
    }
}
class Program43_5
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter size of array");
        int Size=sobj.nextInt();

        float arr[]=new float[Size];

        System.out.println("enter elements one by one for first array");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.nextFloat();
        }

        ArrayDemo obj=new ArrayDemo();

        obj.DisplayClass(arr);
       
    }
}