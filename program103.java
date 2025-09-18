import java.util.*;

/*
     * * * *
     0 0 0 0 
     0 0 0 0
     0 0 0 0
     * * * *

*/

class Pattern
{
   public void Display(int iRow, int iCol)
    {
        int i = 0, j =0, iCnt = 0;
        
        for(i = 1, iCnt = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++,iCnt++)
            {
              if((i ==1 ) || (i == iRow))
              {
                System.out.print("*\t");
              }
              else
              {
                System.out.print("0\t");
              }
                
            }
            System.out.println();
        }

    }
 
 }



class program103
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of column:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);



    }
}