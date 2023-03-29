// accept array of characters from user and replace each capital character with its corresponding small character.
// Input : b N j B R b A d G G
// Output : b n j b r b a d g g 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    // void ConvertCapitalToSmall(String arr)
    // {
    //    char brr[]=arr.toCharArray();

    //    for(int i=0;i<brr.length;i++)
    //    {
    //        if((brr[i]>='A') && (brr[i]<='Z'))
    //        {
    //            brr[i]=(char)(brr[i]+32);
    //        }
    //    }
    //    for(int i=0;i<brr.length;i++)
    //    {
    //        System.out.print(brr[i]+"\t");
    //    }
    // }

    void ConvertCapitalToSmall(char arr[])
    {
       

       for(int i=0;i<arr.length;i++)
       {
           if((arr[i]>='A') && (arr[i]<='Z'))
           {
               arr[i]=(char)(arr[i]+32);
           }
       }
       for(int i=0;i<arr.length;i++)
       {
           System.out.print(arr[i]+"\t");
       }
    }
}
class Program44_1
{
    public static void main(String[] args) {
        
        // Scanner sobj=new Scanner(System.in);
        // System.out.println("Enter character");
        // String str=sobj.nextLine();
        
        // ArrayDemo obj=new ArrayDemo();

        // obj.ConvertCapitalToSmall(str);
       

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter Size of array");
        int Size=sobj.nextInt();
        
        char arr[]=new char[Size];

        System.out.println("enter character one by one");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.next().charAt(0);
        }
        ArrayDemo obj=new ArrayDemo();

        obj.ConvertCapitalToSmall(arr);
    }
}