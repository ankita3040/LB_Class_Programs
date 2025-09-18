import java.util.*;
 
 class Number
 {
    public  void DisplayFactor(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
 }
class program60
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();
      


        Number eobj =new Number();

        eobj.DisplayFactor(iValue);

       
    }
}