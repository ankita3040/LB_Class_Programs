
import java.util.*;

class program797
{
    
        public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        int Arr[] = { 0,1,0,0,1,0,1,0};

        int iSum = 0, i = 0;
        for(int no : Arr)
        {
            iSum += no;
        }

        for(i = 0; i < Arr.length- iSum; i++)
        {
            Arr[i] = 0;
        }
        for(i = Arr.length - iSum; i < Arr.length ; i++)
        {
            Arr[i] = 1;
        }

        System.out.println("segerated array is : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }

        System.out.println();
    }
}
//Time complexity O(2N)
