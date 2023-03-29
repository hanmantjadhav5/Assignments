import java.lang.*;
import java.util.*;

class StringDemo
{
    void StringConcat(String p,String q,int value) 
    {
        int size1=p.length()+q.length();
        char brr[]=new char[size1];
        char arr[]=p.toCharArray();
        char arr1[]=q.toCharArray();

        int i=0,j=0,k=0;
        if(value>arr1.length)
        {
            value=arr1.length;
        }
        for(i=0;i<arr.length;i++)
        {
            brr[k]=arr[i];
            k++;
            //System.out.print(arr[i]);
        }
        k--;
        k--;
        //k=arr.length;
        brr[k]=' ';
       for(j=0;j<value;j++)
        {
            brr[k]=arr1[j];
            //System.out.print(arr1[j]);
            k++;
            // if(j!=value)
            // {
            //     break;
            // }
        }
       System.out.println("String after concat ");
       for(i=0;i<brr.length;i++)
       {
           
            System.out.print(brr[i]);
            
       }
    }
}
class Program35_1
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter string");
        String str=sobj.nextLine()+10;

        System.out.println("enter another string");
        String str1=sobj.nextLine();

        System.out.println("enter value of N to Concat string");
        int value=sobj.nextInt();
        
        StringDemo obj=new StringDemo();
        obj.StringConcat(str,str1,value);

    }
}