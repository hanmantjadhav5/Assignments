//accept two array from user and check whether that array and its elements are palindrome or not.
// Input : 11 252 387783 252 11
// Output : TRUE
// Input : 11 252 387783 77 11
// Output : FALSE
// Input : 11 252 786 252 11
// Output : FALSE
// Input : 11 252 786 253 11
// Output : FALSE

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    boolean CheckPalidrome(int arr[])
    {
        int iDigit=0,iSum=0;
        int no=0,i=0;
        for(i=0;i<arr.length;i++)
        {
            no=arr[i];
            iSum=0;
            while(arr[i]!=0)
            {
                iDigit=arr[i]%10;
                iSum=(iSum*10)+iDigit;
                arr[i]=arr[i]/10;
            }
            if(no!=iSum)
            {
                break;
            }
        }
       if(no!=iSum)
       {
           return false;
       }
       else
       {
           return true;
       }
    }
}
class Program42_5
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

        ArrayDemo obj=new ArrayDemo();

        boolean ret=obj.CheckPalidrome(arr);
        if(ret==true)
        {
            System.out.println("elements of array are palidrome");
        }
        else
        {
            System.out.println("elements of array are not palidrome");
        }
    }
}