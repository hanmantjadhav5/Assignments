
import java.lang.*;
import java.util.*;

class StringDemo
{
    boolean CheckContent(String str)
    {
         char arr[]=str.toCharArray();
        

        int i=0,j=0;
       
        for(i=0,j=arr.length-1;i<=j;i++,j--)
        {
            if(((arr[i]!=arr[j]) && (arr[i]!=(char)(arr[j]+32)) && ((char)(arr[i]+32))!=arr[j]))
            {
                break;
            }
        }
        if(arr[i]!=arr[j])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
class Program35_5
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        boolean ret=obj.CheckContent(str);

        if(ret==true)
        {
            System.out.println(" string is palidrome");
        }
        else
        {
            System.out.println("string is not palidrome");
        }
    }
}