// accept array of characters from user and return difference between frequency of capital and frequency of small characters.
// Input : b N e B R b A I O G i
// Output : 3 (7 - 4) 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    int Difference(char arr[])
    {
        int i=0,iCnt=0,iCnt1=0;
        for(i=0;i<arr.length;i++)
        {
            if((arr[i]>='A') && (arr[i]<='Z'))
            {
                iCnt++;
            }
            if((arr[i]>='a') && (arr[i]<='z'))
            {
                iCnt1++;
            }
        }
      return iCnt-iCnt1;
    }
}
class Program44_4
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter size of first array");
        int Size=sobj.nextInt();

        char arr[]=new char[Size];

        System.out.println("enter elements one by one for first array");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.next().charAt(0);
        }

        ArrayDemo obj=new ArrayDemo();

        int ret=obj.Difference(arr);
        
        System.out.println("Difference is "+ret);
        
    }
}