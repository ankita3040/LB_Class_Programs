import java.util.*;
import java.io.*;

public class program447
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of directory");
            String DirName = sobj.nextLine();

            File fobj = new File(DirName);

            if(fobj.exists())
            {
                System.out.println("Directory is present");
            }
            else
            {
                System.out.println("No such directory ");
            }

            
        }
        catch(Exception eobj)
        {}

    }
}