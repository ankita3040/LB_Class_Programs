import java.util.*;
import java.io.*;

public class program458
{

    public static void main(String A[])
    {
        try
        {
            String str = "     Marvellous Infosystems Pune     ";
            
            System.out.println("Original length is : "+str.length());

            str = str.trim();

            System.out.println("Updated length is : "+str.length());

            String Arr[] = str.split(" ");

            System.out.println("Number of tokens  : "+Arr.length);
        }
        catch(Exception eobj)
        {}

    }
}