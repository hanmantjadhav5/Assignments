import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String s)
    {
        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if (Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o'
            || Arr[i] == 'u' || Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I'
            || Arr[i] == 'O' || Arr[i] == 'U')
            {
                return true;
            }
        }
        return false;
    }
}

class Program31_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a String :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.ChkVowel(str);

        if(bRet == true)
        {
            System.out.println("There is vowels in a string");
        }
        else
        {
            System.out.println("There is no vowels in a string"); 
        }
    }
}