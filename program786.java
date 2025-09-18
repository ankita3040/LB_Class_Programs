import java.util.*;


class program786
{
        
        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number ");
        int No = sobj.nextInt();

        //program786.java:14: error: incompatible types: int cannot be converted to boolean
        //if(No & 0x00000001)
              ^
        if(No & 0x00000001)
        {
            System.out.println("Number is odd");
        }
        else
        {
            System.out.println("Number is even");
        }
        
    }
}