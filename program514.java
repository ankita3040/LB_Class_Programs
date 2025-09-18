//_ _ _ India_ _ _ is_ _ my_country_ _ _
//After trim
// India_ _ _ is_ _ my_country
import java.util.*;

class program514
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str.replaceAll("AB","A");

        System.out.println("Updated string is : " +str);
    }
    
}
