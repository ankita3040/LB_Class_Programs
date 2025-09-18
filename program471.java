
import java.util.*;
import java.io.*;

class program471
{

    public static void main(String A[])
    {
        try
        {

            Scanner sobj = new Scanner(System.in);
            
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

            fiobj.read(HeaderBuffer,0,100); // 0-start 100- end
            //Convert byte array to string
            String Header = new String(HeaderBuffer);

            System.out.println(Header);

            Header = Header.trim();

            String token[] = Header.split(" ");

            System.out.println("File name is : "+token[0]);
            System.out.println("File size is : "+token[1]);


        }
        catch(Exception eobj)
        {}
    }//End of main
}// end of class469