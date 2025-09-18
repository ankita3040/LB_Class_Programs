import java.util.*;

class program492
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int aCount = 0, bCount = 0, cCount = 0, i = 0;

        for( i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == 'a')
            {
                aCount++;
            }
            else if(Arr[i] == 'b')
            {
                bCount++;
            }
            else if(Arr[i] == 'z')
            {
                cCount++;
            }
        }

        System.out.println("Count of 'a' is :  "+aCount);
        System.out.println("Count of 'b' is :  "+bCount);
        System.out.println("Count of 'z' is :  "+cCount);
    }
}

