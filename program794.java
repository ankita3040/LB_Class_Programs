
import java.util.*;


class program794
{
    
        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number ");
        int No = sobj.nextInt();

         int  iCount = 0;

        //Brancurly brace algorithm
       

        if((No & (No -1) )== 0)
        {
            System.out.println("Number is power of 2");
        }
        else
        {
             System.out.println("Number is not power of 2");   
        }
        

   
    }
}