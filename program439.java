import java.util.*;
import java.io.*;

public class program439
{
    public static void main(String A[]) 
    {
        try{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name o file that you want to open :");
        String Fname = sobj.nextLine();
        
       
        File fobj = new File(Fname);
        if(fobj.exists())
        {
            FileInputStream Fiobj = new FileInputStream(fobj);
            
            byte Arr[] = new byte[10];
            int iRet =  Fiobj.read(Arr); 
            
            String str = new String( Arr); // convert byte array to string 
            System.out.println("Data from file is : "+str);

            System.out.println("Return of read is "+iRet);
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
