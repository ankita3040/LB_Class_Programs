
class node
{
    public int data;
    public node next; 
    public node prev;
 
}

class DoublyCLL
{
    private node first;
    private node last;
    private int iCount;

    public DoublyCLL()
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
        newn.prev = null;

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;

        }

        last.next = first;
        first.prev = last;
        iCount++;

    }
    public void InsertLast(int no)
    {
        node newn = null;
        
        newn = new node();

        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.prev = last;
            last.next = newn;
            last = newn;
        }

        
        last.next = first;
        first.prev = last;
        iCount++;;

        
    }
    public void InsertAtPos(int no, int pos)
    {
        node newn = null;
        node temp = null;

        int iCnt = 0;

        if(pos < 1 || pos > iCount + 1)
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
            newn.prev = null;

            temp = first;

            for(iCnt = 1; iCnt < pos -1; iCnt++)
            {
                temp = temp.next;
            }
            
            newn.next = temp.next;
            newn.next.prev = newn;
            newn.prev = temp;
            temp.next = newn;

            iCount++;
        }
        
    }

    public void Display()
    {
        node temp = null;

        temp = first;

        if(first == null && last == null)
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
            first.prev = last;
            last.next = first;

        }
        iCount --;

    }

    public void DeleteLast()
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
            last = last.prev;
            first.prev = last;
            last.next = first;
            
        }
        iCount--;

    }
    public void DeleteAtPos(int pos)
    {
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
        else if(pos == iCount )
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
            temp.next = temp.next.next;
            temp.next.prev = temp;

            iCount--;
        }
        
    }
    
}

class program379
{
    public static void main(String A[])
    {
        DoublyCLL dcobj = new DoublyCLL();


        int iRet = 0;

        dcobj.InsertFirst(51);
        dcobj.InsertFirst(21);
        dcobj.InsertFirst(11);

        dcobj.InsertLast(101);
        dcobj.InsertLast(111);
        dcobj.InsertLast(121);

        dcobj.Display();

        iRet = dcobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);

        dcobj.InsertAtPos(105,5);

        dcobj.Display();
        
        iRet = dcobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        dcobj.DeleteAtPos(5);

        dcobj.Display();
        
        iRet = dcobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        dcobj.DeleteFirst();

        dcobj.Display();
        
        iRet = dcobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        dcobj.DeleteLast();

        dcobj.Display();
        
        iRet = dcobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);





    }
}