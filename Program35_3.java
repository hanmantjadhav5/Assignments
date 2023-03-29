
import java.lang.*;
import java.util.*;

class StringDemo
{
    boolean CheckContent(String str,String str1,int size)
    {
         char arr[]=str.toCharArray();
        char arr1[]=str1.toCharArray();

        int i=0;
       
        for(i=0;i<arr.length-1;i++)
        {
            if((arr[i]!=arr1[i]) && (i!=size))
            {
                break;
            }
        }
        if((arr[i]!=arr1[i]) && (i!=size))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
class Program35_3
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first string");
        String str=sobj.nextLine();

        System.out.println("enter Second string");
        String str1=sobj.nextLine();

        System.out.println("enter nth number");
        int size=sobj.nextInt();

        StringDemo obj=new StringDemo();
        boolean ret=obj.CheckContent(str,str1,size);

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