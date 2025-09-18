
import java.util.Scanner;
class MarvellousString
{
    public int CountSmall(String str)
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

class program210
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;;

        System.out.println("Enter string ");
        String str= sobj.nextLine();

        MarvellousString mobj = new MarvellousString();
        iRet = mobj.CountSmall(str);

        System.out.println("Number of small character are " +iRet);

    }
}