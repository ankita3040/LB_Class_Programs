
class node
{
    public int data;
    public node next; 
 
}

class SinglyCLL
{
    private node first;
    private node last;
    private int iCount;

    public SinglyCLL()
    {
        first = null;
        last = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;

        }

        last.next = first;
        iCount++;
        

    }
    public void InsertLast(int no)
    {
        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            last = newn;

        }

        last.next = first;
        iCount++;
        
    }
    public void InsertAtPos(int no, int pos)
    {
        node newn = null;
        node temp = null;
        int iCnt = 0;

        if(pos < 1 || pos > iCount +1)
        {
            System.out.println("Invalid position");
            return;
        }

        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == iCount + 1)
        {
            InsertLast(no);
        }
        else
        {
            newn = new node();
            newn.data = no;
            newn.next = null;

            temp = first;

            for(iCnt = 1; iCnt < pos -1; iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            iCount++;

        }
        
    }

    public void Display()
    {
        node temp = null;

        temp = first;

        if(first == null)
        {
            return;
        }
        do 
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }while(temp != first);

        System.out.println();
    }

    public int Count()
    {
        return iCount;

    }

    public void DeleteFirst()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
            last.next = first;

        }

        iCount--;

    }

    public void DeleteLast()
    {
        node temp = null;

        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            temp = first;

            while(temp.next.next != first)
            {
                temp = temp.next;
            }
            temp.next = first;
            temp = last;    
        }
        iCount--;

    }
    public void DeleteAtPos(int pos)
    {
        node target = null;
        node temp = null;
        int iCnt = 0;

        if(pos < 1 || pos > iCount )
        {
            System.out.println("Invalid position");
            return;
        }

        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(iCnt = 1; iCnt < pos -1; iCnt++)
            {
                temp = temp.next;
            }

            target = temp.next;
            temp.next = target.next;


            iCount--;

        }



    }
    
}

class program377
{
    public static void main(String A[])
    {
        SinglyCLL scobj = new SinglyCLL();

        int iRet = 0;

        scobj.InsertFirst(51);
        scobj.InsertFirst(21);
        scobj.InsertFirst(11);

        scobj.InsertLast(101);
        scobj.InsertLast(111);
        scobj.InsertLast(121);

        scobj.Display();

        iRet = scobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);

        scobj.InsertAtPos(105,5);

        scobj.Display();
        
        iRet = scobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        scobj.DeleteAtPos(5);

        scobj.Display();
        
        iRet = scobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        scobj.DeleteFirst();

        scobj.Display();
        
        iRet = scobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        scobj.DeleteLast();

        scobj.Display();
        
        iRet = scobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);




    }
}