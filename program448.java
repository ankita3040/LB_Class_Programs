import java.util.*;
import java.io.*;

public class program448
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

                File Arr[] = fobj.listFiles();

                System.out.println("Number of files in directory are "+Arr.length);
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