// accept array of characters from user and count the vowels present in the array
// Input : b N e B R b A i G i
// Output : 4 

import java.lang.*;
import java.util.*;


class ArrayDemo
{
    int ReplaceSummationDigits(char arr[])
    {
       
        int iCnt=0,i=0;
        for(i=0;i<arr.length;i++)
        {
            if((arr[i]=='A') || (arr[i]=='a') || (arr[i]=='E') || (arr[i]=='e') || (arr[i]=='I') || (arr[i]=='i') || (arr[i]=='O') || (arr[i]=='o') || (arr[i]=='U') || (arr[i]=='u'))
            {
                iCnt++;
            }
        }
       return iCnt;
    }
}
class Program44_2
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

        int ret=obj.ReplaceSummationDigits(arr);
        System.out.println("Count of vowels is "+ret);
        
    }
}