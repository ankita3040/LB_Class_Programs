//_ _ _ India_ _ _ is_ _ my_country_ _ _
//After trim
// India_ _ _ is_ _ my_country
import java.util.*;

class program515
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine(); // original string

        str = str.trim(); // NEW COPY of string

        str = str.replaceAll("A","X"); // copy of string

        System.out.println("Updated string is : " +str);
    }
    
}
