import java.util.*;
import java.io.*;

public class program436
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
            FileOutputStream Foobj = new FileOutputStream(fobj);
            String str = "Jay Ganesh...";
            
            Foobj.write(str); // error
            System.out.println("File already exit....");
        }
        else
        {
            System.out.println("File not present in current directory");
            return;
        }
        
        }
        catch(IOException iobj)
        {}
        catch(Exception e)
        {}
        
    }
    
}
