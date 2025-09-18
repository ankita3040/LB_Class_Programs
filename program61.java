import java.util.*;
 
 class Number
 {
    public  int SumFactor(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int iCnt = 0, iSum = 0;
        for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
    }
 }
class program61
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();
      


        Number eobj =new Number();

        iRet = eobj.SumFactor(iValue);

        System.out.println("Summation of factor is "+iRet);
       
    }
}