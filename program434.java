import java.util.*;
import java.io.*;

public class program434
{
    public static void main(String A[]) 
    {
         try{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name o file that you want to create :");
        String Fname = sobj.nextLine();
       
        File fobj = new File(Fname);
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
