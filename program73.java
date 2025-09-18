import java.util.*;

class Digits
{
    public int Reverse(int iNo)
    {
        int iCnt = 0, iDigit = 0, iRev = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iNo > 0) 
        {
            iDigit = iNo % 10;
            iRev = (iRev *10) + iDigit;
            iNo = iNo /10;
        }

        return iRev;

      
    }

}
class program73
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj =new Digits();

        iRet =dobj.Reverse(iValue);

         System.out.println("Reverse number is  : "+iRet);

       

    }
}