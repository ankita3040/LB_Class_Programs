import java.util.*;


class program787
{
        
        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter first number ");
        int no1 = sobj.nextInt();

        System.out.println("Enter second number ");
        int no2 = sobj.nextInt();

        no1 = no1 ^ no2;
        no2 = no2 ^ no1;
        no1 = no1 ^ no2;

        System.out.println("No1 after swapping : "+no1);
        System.out.println("No2 after swapping : "+no2);

       
    }
}