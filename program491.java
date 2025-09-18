import java.util.*;

class program491
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

       String sRet =  str.replaceAll(" ","");

       System.out.println("Updated string is : "+sRet);
       System.out.println("Length of string is :"+sRet.length());
        
    }
}

