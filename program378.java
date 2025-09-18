
class node
{
    public int data;
    public node next; 
    public node prev;
 
}

class DoublyLLL
{
    private node first;
    private int iCount;

    public DoublyLLL()
    {
        first = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node();
        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        iCount++;

    }
    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node();
        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;

        }

        iCount++;
        
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

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }

        System.out.println();

    }

    public int Count()
    {
        return iCount;

    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
            first.prev = null;
        }

        iCount--;

    }

    public void DeleteLast()
    {
        node temp = null;

        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            temp = first;

            while(temp.next.next != null)
            {
                temp =  temp.next;
            }
            temp.next = null;
        }

        iCount--;

    }
    public void DeleteAtPos(int pos)
    {
            
        node temp = null;
        node target = null;

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

class program378
{
    public static void main(String A[])
    {
        DoublyLLL dlobj = new DoublyLLL();

        int iRet = 0;

        dlobj.InsertFirst(51);
        dlobj.InsertFirst(21);
        dlobj.InsertFirst(11);

        dlobj.InsertLast(101);
        dlobj.InsertLast(111);
        dlobj.InsertLast(121);

        dlobj.Display();

        iRet = dlobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);

        dlobj.InsertAtPos(105,5);

        dlobj.Display();
        
        iRet = dlobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        dlobj.DeleteAtPos(5);

        dlobj.Display();
        
        iRet = dlobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        dlobj.DeleteFirst();

        dlobj.Display();
        
        iRet = dlobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);


        dlobj.DeleteLast();

        dlobj.Display();
        
        iRet = dlobj.Count();
        System.out.println("Number of elements in ll are : "+iRet);






    }
}