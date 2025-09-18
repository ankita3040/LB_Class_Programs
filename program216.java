import java.util.*;

class program216
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize]; 
        int iCnt = 0, iCount = 0;

        System.out.println("Enter elements ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        } 

        System.out.println("Number even numbers are "+iCount);


        Arr = null;  
        sobj = null;       

    }
}