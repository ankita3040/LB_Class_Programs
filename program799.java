
/*
 * Input : i love programming in python
 * Output:i in love python programming
 * 
 */

import java.util.*;
class program799
{
    
        public static void main(String[] args) 
        {

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        System.out.println(str);
        
        }
}