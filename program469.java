
import java.util.*;
import java.io.*;

class program469
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



        }
        catch(Exception eobj)
        {}
    }//End of main
}// end of class469