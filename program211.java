
import java.util.Scanner;
class MarvellousString
{
    public String str;

    public int CountSmall()
    {
        int iCount = 0, iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
     
        }

        return iCount;

    }


}

class program211
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;;

        System.out.println("Enter string ");
        String data= sobj.nextLine();

        MarvellousString mobj = new MarvellousString();

        mobj.str = data;

        iRet = mobj.CountSmall();

        System.out.println("Number of small character are " +iRet);

    }
}