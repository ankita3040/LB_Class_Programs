//_ _ _ India_ _ _ is_ _ my_country_ _ _
//After trim
// India_ _ _ is_ _ my_country
import java.util.*;

class program518
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine(); 

        str = str.trim(); 

        str = str.replaceAll("\\s+"," "); 

        char Arr[] = str.toCharArray();

        int i = 0, iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        }

        System.out.println("Number of words in string  are : " +(iCount + 1 ));
    }
    
}
