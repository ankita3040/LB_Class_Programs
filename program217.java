import java.util.*;


class NNumberX
{
    public int CountEven(int Arr[])
    {
        int iCnt = 0, iCount = 0;
           
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        } 

        return iCount;

        

    }

}
class program217
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize]; 
        int iCnt = 0, iRet = 0;

        System.out.println("Enter elements ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        NNumberX nobj = new NNumberX();
        iRet = nobj.CountEven(Arr);

     
        System.out.println("Number even numbers are "+iRet);

        Arr = null;  
        sobj = null;       

    }
}