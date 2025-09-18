import java.util.*;

class program215
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize]; // like malloc in c .. Dynamic allocation
        int iCnt = 0;

        System.out.println("Enter elements ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are");

        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        } 

        Arr = null; // give preference to deallocate memory ...it will not  deallocate memory ..garbage collector takes it and deallocate it
        sobj = null;       

    }
}