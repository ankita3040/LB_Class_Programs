import java.util.*;


class program789
{
        
        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number ");
        int No = sobj.nextInt();

        int  iCount = 0;
        
        while(No != 0)
        {
            iCount +=  (No % 2);
            No /= 2 ;
        }

        System.out.println("Number on bits are : "+ iCount);
    }
}