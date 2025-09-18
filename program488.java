import java.util.*;


class StringX
{
    public static String Trim (String str)
    {
        int i = 0, iStart = 0, iEnd = 0;

        char Arr[] = str.toCharArray(); // _ _ _JAY_ _GANESH_ _ _ 

        if(Arr[0] == ' ')
        {
       
            while(( Arr[i] == ' ') && (i < Arr.length)) // if all white space are ... (i < Arr.length)
            {
                i++;
            }
        }

        iStart = i;

        i = 0;
        i = Arr.length-1;
        if(Arr[Arr.length-1] == ' ')
        {
            
            while(Arr[i] == ' ')
            {
                i--;
            }
        }

        iEnd = i;

        char brr[] = new char[iEnd-iEnd-1]; // after trim store string 
        int j = 0;
        for(i = iStart , i = 0; i <=  iEnd; i++,j++)
        {
            brr[j] = Arr[i];
        }

        return new String(brr);

    }


}
class program488
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        char Arr[] = {'a', 'b','c','d','e','g','h','i'};

        String s = new String(Arr);

        System.out.println(s);

        s = new String(Arr,1,4);
        
        System.out.println(s);
    }
}

