
import java.util.*;
import java.io.*;

class program474
{

    public static void main(String A[])
    {
        try
        {
            String Header = null;
            File fobjnew = null;
            Scanner sobj = new Scanner(System.in);
            
            int FileSize = 0, iRet = 0;

            System.out.println("Enter the name of file which conatins packed file");
            String  PackName = sobj.nextLine();

            File fobj = new File(PackName);

            if(!fobj.exists())
            {
                System.out.println("Unable to access packed file");
            }
            System.out.println("Packed file get successfully opened ");
            
            FileInputStream fiobj = new FileInputStream(fobj);
            //boffer to read header
            byte HeaderBuffer[] = new byte[100];

            while((iRet = fiobj.read(HeaderBuffer,0,100)) != -1)
            {
                //Convert byte array to string
                 Header = new String(HeaderBuffer);

                 Header = Header.trim();

                String token[] = Header.split(" ");

                fobjnew = new File(token[0]);

                fobjnew.createNewFile();

                FileSize =  Integer.parseInt(token[1]);
                byte Buffer[] = new byte[FileSize];

                FileOutputStream foobj = new FileOutputStream(fobjnew);

                fiobj.read(Buffer,0,FileSize); // read data from file

                foobj.write(Buffer,0,FileSize);

                //foobj.close();
                
            }
            
            
        }
        catch(Exception eobj)
        {}
    }//End of main
}// end of class469