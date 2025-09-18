
import java.util.*;

class program798
{
    
        public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int Arr[] = { 0,1,0,0,1,0,1,0};

        int  i = 0, iStart = 0, iEnd = 0;
        iStart = 0;
        iEnd = Arr.length-1;

        while(iStart < iEnd)
        {
            if(Arr[iStart] == 0)
            {
                iStart++;
            }
            else if(Arr[iEnd] == 1)
            {
                iEnd--;
            }
            else
            {
                Arr[iStart] = 0;
                Arr[iEnd] =1;
                iStart++;
                iEnd--;
            }
        }


        
        System.out.println("segerated array is : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }

        System.out.println();
    }
}
//Time complexity O(N)
