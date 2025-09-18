
/*
 * Input : i love programming in python
 * Output:i in love python programming
 * 
 */

import java.util.*;
class program800
{
    
        public static void main(String[] args) 
        {

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");      // more than one white spce to one white space

        String words[] = str.split(" ");        //Array of string

        Arrays.sort(words,Comparator.comparingInt(String::length)); // compare integer ->comapre string length
        
        String finalstr = String.join(" ",words);
        System.out.println(finalstr);
        
        }
}