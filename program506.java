import java.util.*;

class program506
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        str = str.replaceAll(" ","");

        System.out.println(str);

        HashMap<Character,Integer> hobj = new HashMap<Character,Integer>();

        char Arr[] = str.toCharArray();
        int Frequency = 0;

        for(char ch : Arr)
        {
            
            if(hobj.containsKey(ch)) // charcter is already there in hashmap
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency +1);
            }
            else    // charcter occured first time
            {
                hobj.put(ch,1);
            }
        }

        

        for(char ch : hobj.keySet())
        {
            System.out.println("Frequency of : "+ch+" is "+hobj.get(ch));
        }


        
    }

}  