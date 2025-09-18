import java.util.*;
import java.io.*;

public class program445
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter name of source file ");
            String source = sobj.nextLine();

            System.out.println("Enter name of destination file ");
            String dest = sobj.nextLine();

            File fsource = new File(source);

            if(fsource.exists() == false)
            {
                System.out.println("Source file is not present");
            }

            File fdest = new File(dest);

            if(fdest.exists() == true)
            {
                System.out.println("Destination file is present");
            }

            fdest.createNewFile();

            FileInputStream fiobj = new FileInputStream(fsource);
            FileOutputStream foobj = new FileOutputStream(fdest);

            byte Buffer[] = new byte[1024];

            int iRet = 0;

            while((fiobj.read(Buffer) ) != -1)
            {
                foobj.write(Buffer);
            }

            System.out.println("File copy done ....");

        }
        catch(Exception eobj)
        {}

    }
}