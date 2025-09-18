
import java.util.*;


class program791
{
    
    // Time complexity is least 
        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number ");
        int No = sobj.nextInt();

        int  iCount = 0;

        //Brancurly brace algorithm
        while(No != 0)
        {
            No = No & (No -1);
            iCount++;
        }

        System.out.println("Number on bits are : "+ iCount);
    }
}