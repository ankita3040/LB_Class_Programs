import java.util.*;
import java.io.*;

public class program443
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

            int iRet = 0;

            System.out.println("Data from file is : ");
            while((iRet = Fiobj.read(Arr)) != -1)
            {
                
                String str = new String(Arr,0,iRet);
                System.out.println(str); 

            }
           System.out.print("Value of iRet at the end is "+ iRet);
            
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
