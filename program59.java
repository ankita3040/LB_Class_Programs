import java.util.*;
 
 class Number
 {
    public  boolean CheckEven(int iNo1)
    {
        if((iNo1 % 2 ) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
 }
class program59
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();
      


        Number eobj =new Number();

        bRet = eobj.CheckEven(iValue);

        if(bRet == true)
        {
        System.out.println(iValue +"  is Even ");
        }
        else
        {
            System.out.println(iValue+"  is Odd ");
        }

    }
}