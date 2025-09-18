import java.util.*;

class program493
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int Count[] = new int [3]; 
        int  i = 0;

        for( i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == 'a')
            {
                Count[0]++;
            }
            else if(Arr[i] == 'b')
            {
                Count[1]++;
            }
            else if(Arr[i] == 'z')
            {
                Count[2]++;
            }
        }

        System.out.println("Count of 'a' is :  "+Count[0]);
        System.out.println("Count of 'b' is :  "+Count[1]);
        System.out.println("Count of 'z' is :  "+Count[2]);
    }
}

