import java.util.*;

/*
    convert str1 to char array as Arr
    convert str2 to char array as Brr


    create array count1 of size 26 for Arr
    create array count2 of size 26 for Brr

    travel Arr and maintain the frequency in count1
    travel Brr and maintain the frequency in count2

    compare count1 and count2

    if they are equal return true
    otherwise return false

 */
class StringX
{
    public static  boolean CheckAnagram(String str1, String str2)
    {
        int i = 0;
        boolean bFlag = true;

        if(str1.length() != str2.length())
        {
            return false;
        }
        char Arr[] = str1.toCharArray(); //50
        char Brr[] = str2.toCharArray(); //50

        int count1[] = new int[26]; //104
        int count2[] = new int [26];//104

        for( i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                count1[Arr[i] - 'a']++;
            }
            if(Brr[i] >= 'a' && Brr[i] <= 'z')
            {
                count2[Brr[i] - 'a']++;
            }
                
        }

       

        for(i = 0; i < 26; i++)
        {
            if(count1[i] != count2[i])
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;


    }
}
class program501
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string: ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second string: ");
        String str2 = sobj.nextLine();

        boolean bRet = false;

        bRet = StringX. CheckAnagram(str1,str2);

        if (bRet == true)
        {
            System.out.println("Strings are Anagram ");
        }
        else
        {
           System.out.println("Strings are not Anagram "); 
        }

    }

}  