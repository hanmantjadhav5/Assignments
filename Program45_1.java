// Accept two strings from user and check whether first string is rotational or not

import java.util.*;

class StringDemo
{
    static boolean areRotations(String str1, String str2)
    {
        int s1 = str1.length();
        int s2 = str1.length();  
        
        return (s1 == s2) && ((str1 + str1).indexOf(str2) != -1);
    }
}

class Program45_1
{
    public static void main (String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String : ");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter second String : ");
        String str2 = sobj.nextLine();

        StringDemo obj = new StringDemo();

        if (obj.areRotations(str1, str2))
        {
            System.out.println("Strings are rotations of each other");
        }            
        else
        {
            System.out.printf("Strings are not rotations of each other");
        }
    }
}