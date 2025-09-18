import java.util.*;
import java.io.*;

public class program433
{
    public static void main(String A[]) 
    {
        try{
        File fobj = new File("PPA.txt");
        if(fobj.exists())
        {
            System.out.println("File already exit....");
        }
        else
        {
            fobj.createNewFile();
            System.out.println("File created successfully");
        }
        
        }
        catch(IOException iobj)
        {}
        catch(Exception e)
        {}
        
    }
    
}
