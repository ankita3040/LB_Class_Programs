import java.util.*;

class Digits
{
    public int CountEven(int iNo)
    {
        int iCnt = 0, iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iNo > 0) 
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iCnt++;
               
            }
             iNo = iNo /10;
        }
        return iCnt;

      
    }

}
class program72
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj =new Digits();

        iRet =dobj.CountEven(iValue);

         System.out.println("Number of even digits are  : "+iRet);

       

    }
}