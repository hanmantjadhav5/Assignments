import java.util.*;

class StringDemo
{
    public int CapCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Program31_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CapCount(str);

        System.out.println("Number of Capital letters are : "+iRet);

    }

}