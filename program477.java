
import java.util.*;
import java.io.*;

class MarvellousUnPacker
{
    private String PackName;

    public  MarvellousUnPacker(String A)
    {
        this.PackName = A;
    }

    public void UnPackingActivity()
    {
        try
        {
            System.out.println("----------------------------------------------------------");
            System.out.println("----------------Marvellous Packer Unpacker ---------------");
            System.out.println("----------------------------------------------------------");
            System.out.println("----------------------UnPacking Activity------------------");
            System.out.println("----------------------------------------------------------");

            String Header = null;
            File fobjnew = null;
            int FileSize = 0, iRet = 0, iCountFile = 0;

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
                System.out.println("File unpack with name "+ token[0]+ " having size "+FileSize);

                iCountFile++;

                foobj.close();
                
            }// End of while

            System.out.println("----------------------------------------------------------");
            System.out.println("------------------Statistical Report ---------------------");
            System.out.println("----------------------------------------------------------");


            System.out.println("Total number of files unpacked : "+ iCountFile);
            fiobj.close();

             System.out.println("----------------------------------------------------------");
             System.out.println("----------Thank you for using our applicatiion------------");
             System.out.println("----------------------------------------------------------");
            
            
        }
        catch(Exception eobj)
        {}

    }
}

class program477
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