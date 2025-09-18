import java.util.*;


class program782
{
        public static int FormIP(int No1, int No2, int No3, int No4)
        {   
            No1 = No1 << 24;
            No2 = No2 << 16;
            No3 = No3 << 8;
            No4 = No4 << 0;

            int ip = No1 | No2 | No3 | No4;
            return ip;   
        }

        public static void SplitIP(int ip)
        {
            int No1 = 0, No2 = 0, No3 = 0, No4 = 0;
            int Mask1 = 0;
            int Mask2 = 0x00ff0000;
            int Mask3 = 0x0000ff00;
            int Mask4 = 0x000000ff;
            
            No1 = ip >> 24;

            No2 = ip & Mask2 ;
            No2 = No2 >> 16;

            No3 = ip & Mask3;
            No3 = No3 >> 8;

            No4 = ip & Mask4;
            
           System.out.println("Ip address : "+No1+"."+No2+"."+No3+"."+No4);
        }

        public static void main(String[] args) {

        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter IP address : ");
        int  No1 =sobj.nextInt();
        int No2 =sobj.nextInt();
        int No3 =sobj.nextInt();
        int No4 =sobj.nextInt();
        
        
        int iRet = FormIP(No1, No2, No3, No4);
        System.out.println("Formed number contains IP address is : "+iRet);
       
        SplitIP(iRet);

        

        
    
    }
}