import java.util.*;

class Digits
{
    public int CountDigit(int iNo)
    {
        int iCnt = 0;

        
        while(iNo != 0) //(iNo > 0)
        {
            
            iCnt++;

            iNo = iNo /10;
        }

        return iCnt;
    }

}
class program66
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj =new Digits();

        iRet = dobj.CountDigit(iValue);

        System.out.println("Number of Digit are :"+iRet);

    }
}