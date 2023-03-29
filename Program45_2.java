// accept string from user and print frequency of each world

import java.util.*;

class StringDemo
{
    static void CountFreq(String str)
    {
        Map<String,Integer> mp=new TreeMap<>();
 
        String arr[]=str.split(" ");
 
        for(int i=0;i<arr.length;i++)
        {
            if(mp.containsKey(arr[i]))
            {
                mp.put(arr[i], mp.get(arr[i])+1);
            }
            else
            {
                mp.put(arr[i],1);
            }
        }
        
        for(Map.Entry<String,Integer> entry: mp.entrySet())
        {
            System.out.println(entry.getKey()+" - "+entry.getValue());
        }
    }   
}

class Program45_2
{
    public static void main (String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        
        StringDemo obj = new StringDemo();

        obj.CountFreq(str);
    }
}