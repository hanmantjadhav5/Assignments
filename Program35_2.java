import java.lang.*;
import java.util.*;

class StringDemo
{
    boolean CheckContent(String str,String str1)
    {
         char arr[]=str.toCharArray();
        char arr1[]=str1.toCharArray();

        int i=0;
        if(arr.length!=arr1.length)
        {
            return false;
        }
        for(i=0;i<arr.length-1;i++)
        {
            if(arr[i]!=arr1[i])
            {
                break;
            }
        }
        if(arr[i]!=arr1[i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
class Program35_2
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first string");
        String str=sobj.nextLine();

        System.out.println("enter Second string");
        String str1=sobj.nextLine();

        StringDemo obj=new StringDemo();
        boolean ret=obj.CheckContent(str,str1);

        if(ret==true)
        {
            System.out.println("both string are same");
        }
        else
        {
            System.out.println("both string are not same");
        }
    }
}