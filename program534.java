//hello demo madam nayan level ppa radar
//madam nayan level radar 

import java.util.*;

class program534
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine(); 
        str = str.trim();

        str = str.replaceAll("\\s+" ," ");
        

        StringBuilder sb = new StringBuilder(str);

        sb.reverse();

        String newstr = new String(sb);

        String tokens[] = str.split(" ");
        String tokens2[] = newstr.split(" ");
        for(String s : tokens)
        {
            for(String s2 : tokens2)
            {
                if(s.equals(s2))
                {
                    System.out.println(s);
                }
            

            }
            
        }
        /*
         
         str = str.trim();

        str = str.replaceAll("\\s+" ," ");
        

        StringBuilder sb = new StringBuilder(str);

        sb.reverse();

        String newstr = new String(sb);
        
        String tokens[] = str.split(" ");
      
        StringBuilder sb = new StringBuilder(str);

        sb.reverse();

        if(str.equals(new String(sb)))
        {
            System.out.println(s);
        }
       
         */
       
    }   
}