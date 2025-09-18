import java.util.*;
import java.io.*;

public class program459
{

    public static void main(String A[])
    {
        try
        {
            String str = "     Marvellous Infosystems Pune by Piyush Manohar Khainar     ";
            
            System.out.println("Original length is : "+str.length());

            str = str.trim();

            System.out.println("Updated length is : "+str.length());

            String Arr[] = str.split(" ");

            System.out.println("Number of tokens  : "+Arr.length);

            int i = 0;

            for(i = 0; i < Arr.length; i++)
            {
                System.out.println(Arr[i]);  
            }
        }
        catch(Exception eobj)
        {}

    }
}