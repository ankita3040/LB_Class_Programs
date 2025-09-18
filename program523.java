//_ _ _ India_ _ _ is_ _ my_country_ _ _
//After trim
// India_ _ _ is_ _ my_country
import java.util.*;

class program523
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine(); 

        str = str.trim(); 

        str = str.replaceAll("\\s+"," "); 
        String tokens[] =str.split(" ");

        int i = 0, iMax = 0, MaxIndex = 0;


        for(i = 0; i <tokens.length; i++)
        {
            if(iMax < tokens[i].length())
            {
                iMax = tokens[i].length();
                MaxIndex = i;
            }
            
        }
        
        System.out.println("Maximum size of word is ");
            
       
    }
    
}
