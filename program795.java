
import java.util.*;

// Not running properly
class program795
{
    
        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        int Arr[] = {7,2,9,7,3,8,2,9,3};

        boolean bFlag = true;

        int i = 0, j = 0, iFound = 0;
        
        for(i =0 ; i < Arr.length; i++)
        {
            bFlag = false;
            for(j = i+1; j < Arr.length; j++)
            {
                if(Arr[i] == Arr[j])
                {
                    bFlag = true;
                }
            }
        }

        if(bFlag == false)
        {
            iFound = Arr[i];
        }

        System.out.println("Non paired element is : "+ iFound);
   
    }
}