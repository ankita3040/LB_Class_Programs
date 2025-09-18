import java.util.*;
import java.io.*;

public class program466
{

    public static void main(String A[])
    {
        try
        {
            System.out.println("----------------------------------------------------------");
            System.out.println("----------------Marvellous Packer Unpacker ---------------");
            System.out.println("----------------------------------------------------------");
            System.out.println("-----------------------Packing Activity-------------------");

            int i = 0, j = 0, iRet = 0, iCountFile = 0;

            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of directory that you want to pack");
            String DirName = sobj.nextLine();


            
            System.out.println("Enter the name of file that you want to create for packing");
            String  PackName = sobj.nextLine();

           
            File fobj = new File(DirName);

            // Check the existance of directory
            if(((fobj.exists()) && fobj.isDirectory()))
            {
                System.out.println(DirName+" is successfully opened");

                File PackObj = new File(PackName);

                // create a packed file
                boolean bRet = PackObj.createNewFile();

                if(bRet == false)
                {
                    System.out.println("Unable to create pack file");
                    return;
                }

                System.out.println("Packed file get successfully created with "+PackName);

                //Retrive aal files form directory
                File Arr[] = fobj.listFiles();

                // Packed file object
                FileOutputStream foobj = new FileOutputStream(PackObj); // write
                // buffer for read and write acitivity
                byte Buffer[] = new byte[1024];

                String Header = null;

                
                // Directory traversal 
                for(i = 0;  i < Arr.length; i++)
                {
                  Header = Arr[i].getName() +" "+ Arr[i].length();
                 
                  
                  // loop to form 100 bytes header
                  for(j = Header.length(); j < 100; j++)
                  {
                    Header = Header + " ";
                  }
                  // write header into packed file
                  foobj.write(Header.getBytes()); // string to byte array
                  
                  // open file from directory for reading 
                   FileInputStream fiobj = new FileInputStream(Arr[i]);
                    // write contents of file into packed file
                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        foobj.write(Buffer,0,iRet);
                        System.out.println("File size read is "+iRet);
                        System.out.println("File name scanned :"+Arr[i].getName());
                    }
                    fiobj.close();

                    iCountFile++;
                }

                System.out.println("Packing activity done ");

                System.out.println("----------------------------------------------------------");
                System.out.println("------------------Statistical Report ---------------------");
                System.out.println("----------------------------------------------------------");

                // To be add
                System.out.println("Total files packed "+iCountFile);

                System.out.println("----------------------------------------------------------");
                System.out.println("----------Thank you for using our applicatiion------------");
                System.out.println("----------------------------------------------------------");
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