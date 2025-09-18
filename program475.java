
import java.util.*;
import java.io.*;

class program475
{

    public static void main(String A[])
    {
        try
        {
            String Header = null;
            File fobjnew = null;
            Scanner sobj = new Scanner(System.in);
            
            int FileSize = 0, iRet = 0, iCountFile = 0;

            System.out.println("Enter the name of file which conatins packed file");
            String  PackName = sobj.nextLine();

            File fobj = new File(PackName);

            // if Packfile is not present
            if(!fobj.exists())
            {
                System.out.println("Unable to access packed file");
            }
            System.out.println("Packed file get successfully opened ");
            
            FileInputStream fiobj = new FileInputStream(fobj);
            //buffer to read header
            byte HeaderBuffer[] = new byte[100];

            //Scan the packed file to extract the files from it
            while((iRet = fiobj.read(HeaderBuffer,0,100)) != -1)
            {
                //Convert byte array to string
                Header = new String(HeaderBuffer);

                Header = Header.trim();
                //Tokenize the header into two parts 
                String token[] = Header.split(" ");

                fobjnew = new File(token[0]);

                //Create new file to extarct
                fobjnew.createNewFile();
                
                FileSize =  Integer.parseInt(token[1]);
                //Create new buffer to store file data
                byte Buffer[] = new byte[FileSize];

                FileOutputStream foobj = new FileOutputStream(fobjnew);

                //Read the data from packed file
                fiobj.read(Buffer,0,FileSize); 

                //Write the data into extracted file
                foobj.write(Buffer,0,FileSize);
                System.out.println("File unpack with name "+ token[0]+ "having size "+FileSize);

                iCountFile++;

                foobj.close();
                
            }// End of while

            System.out.println("Total number of files unpacked : "+ iCountFile);
            fiobj.close();
            
            
        }
        catch(Exception eobj)
        {}
    }//End of main
}// end of class469