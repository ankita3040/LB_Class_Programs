import java.util.*;
 
 class Number
 {
    public  int SumNonFactor(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int iCnt = 0, iSum = 0;
        for(iCnt = 1; iCnt <= iNo  ; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;

       
    }
 }
class program63
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();
      


        Number eobj =new Number();

        iRet =  eobj.SumNonFactor(iValue);

        System.out.println("Sumation of Non factor is "+iRet);

        
       
    }
}