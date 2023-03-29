// accept array of characters from user and count number of capital characters.
// Input : b N j B R b A d G G
// Output : 6 

import java.io.BufferedReader;
import java.lang.*;
import java.util.*;
import java.io.*;


class ArrayDemo
{
    
    int CountCapital(String arr)
    {
        char brr[]=arr.toCharArray();
        int iCnt=0;
        int i=0;
        for(i=0;i<arr.length();i++)
        {
            if((brr[i]>='A') && (brr[i]<='Z'))
            {
                iCnt++;
            }
           
        }
       return iCnt;
    }
}
class Program43_4
{
    public static void main(String[] args) //throws Exception
     {
        
        // BufferedReader sobj=new BufferedReader(new InputStreamReader(System.in));
    
        // System.out.println("Enter size of character array");
        // int Size=Integer.parseInt(sobj.readLine());

        Scanner sobj=new Scanner(System.in);
        System.out.println("enter size of character array");
        String  str=sobj.nextLine();

        ArrayDemo obj=new ArrayDemo();
        int ret=obj.CountCapital(str);
        System.out.println("Count of capital letter is "+ret);
        
    }
}