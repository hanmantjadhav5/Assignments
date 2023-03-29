
import java.lang.*;
import java.util.*;

class StringDemo
{
    void CheckContent(String str)
    {
         char arr[]=str.toCharArray();
        

        int i=0,j=0;
       
        for(i=0,j=arr.length-1;i<=j;i++,j--)
        {
            
           
            if(((arr[i]>='a') && (arr[i]<='z')))
            {
                arr[i]=(char)(arr[i]-32);
               
                
            }
           
            else if(((arr[i]>='A') && (arr[i]<='Z')))
            {
                arr[i]=(char)(arr[i]+32);
                
                
            }
            if( ((arr[j]>='a') && (arr[j]<='z')))
            {
                arr[j]=(char)(arr[j]-32);
            }
            else if((arr[j]>='A') && (arr[j]<='Z'))
            {
                arr[j]=(char)(arr[j]+32);
            }
            char ch=arr[i];
            arr[i]=arr[j];
            arr[j]=ch;
        }
        System.out.println("String after toggling is");
        for(i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]);
        }
    }
}
class Program35_4
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter first string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        obj.CheckContent(str);

    }
}