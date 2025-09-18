//_ _ _ India_ _ _ is_ _ my_country_ _ _
//After trim
// India_ _ _ is_ _ my_country
import java.util.*;

class program517
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine(); 

        str = str.trim(); 

        str = str.replaceAll("\\s+"," "); // \\s+ is regular expresiion ..one or more \\s is space + is atleast one
                                                            // 4 space/3spaces/2space ->1 white space
        System.out.println("Updated string is : " +str);
    }
    
}
