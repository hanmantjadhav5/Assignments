import java.util.*;

class StringDemo
{
    public String Reverse(String s)
    {
        char Arr[] = s.toCharArray();
        String rev= "";

        for( int i = Arr.length-1; i >= 0; i--)
        {
            rev = rev + Arr[i];
        }
        return rev;
    }
}

class Program31_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        System.out.print("Original String: "+str);

        String sRet = obj.Reverse(str);
        System.out.println("\nReversed String: "+sRet);
    }

}