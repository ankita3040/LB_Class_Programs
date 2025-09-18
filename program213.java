
import java.util.Scanner;
import MarvellousLB.MarvellousString;

class program213
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;;

        System.out.println("Enter string  ");
        String data= sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        iRet = mobj.CountSmall();

        System.out.println("Number of small character are " +iRet);

    }
}