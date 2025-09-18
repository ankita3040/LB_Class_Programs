import MarvellousPackerUnPacker.MarvellousUnPacker;
import java.util.*;
import java.io.*;

class program478
{

    public static void main(String A[])
    {
        try
        {
            
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of file which conatins packed file");
            String  PackName = sobj.nextLine();

            MarvellousUnPacker mobj = new MarvellousUnPacker(PackName);
            mobj.UnPackingActivity();
                        
        }
        catch(Exception eobj)
        {}
    }//End of main
}