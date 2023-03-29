import java.util.*;

class StringDemo
{
    public int CapCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Program31_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CapCount(str);

        System.out.println("Number of Small Case letters are : "+iRet);

    }

}