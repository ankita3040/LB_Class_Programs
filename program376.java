
class node
{
    public int data;
    public node next;   
}

class SinglyLLL
{
    private node first;
    private int iCount;

    public SinglyLLL()
    {
        System.out.println("Inside constructor");
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

        if(first == null)  // LL is empty
        {
            first = newn;
        }
        else            // LL contain atleast one node
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            
        }
        iCount++;

    }

    public void Display()
    {
        node temp = null;

        temp = first;

        while(temp != null)
        {
            System.out.print(" | "+temp.data +" |->");
            temp = temp.next;
        }
        System.out.println("null");

    }
    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if (first == null)
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

        }

        iCount--;

    }
    public void DeleteLast()
    {
        node temp = null;

        if (first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = first.next;
        }
        else
        {
            temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;

        }

        iCount--;

    }

    public void InsertAtPos(int no,int pos)
    {
        node newn = null;
        node temp = null;
        int i = 0;

        if(pos < 1 || pos >iCount +1)
        {
            System.out.println("Invalid position");
            return;
        }
        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == iCount +1)
        {
            InsertLast(no);

        }
        else
        {
            newn = new node();

            newn.data = no;
            newn.next = null;

            temp = first;

            for(i = 1; i  < pos -1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;
            
            iCount++;


        }

    }
    public void DeleteAtPos(int pos)
    {
        node temp = null;
    
        int i = 0;

        if(pos < 1 || pos >iCount)
        {
            System.out.println("INvalid position");
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

            for(i = 1; i  < pos -1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            
            iCount--;
        }
    }

    
}
class program376
{
    public static void main(String A[])
    {
        SinglyLLL slobj = new SinglyLLL();
        int iRet = 0;

        slobj.InsertFirst(51);
        slobj.InsertFirst(21);
        slobj.InsertFirst(11);

        slobj.InsertLast(101);
        slobj.InsertLast(111);
        slobj.InsertLast(121);

        slobj.Display();

        iRet = slobj.Count();

        System.out.println("Number o elements in ll are : "+iRet);

        slobj.InsertAtPos(105,5);

        slobj.Display();

        iRet = slobj.Count();

        System.out.println("Number o elements in ll are : "+iRet);

        slobj.DeleteAtPos(5);

        slobj.Display();

        iRet = slobj.Count();

        System.out.println("Number o elements in ll are : "+iRet);

        slobj.DeleteFirst();

        slobj.Display();

        iRet = slobj.Count();

        System.out.println("Number o elements in ll are : "+iRet);

        slobj.DeleteLast();

        slobj.Display();

        iRet = slobj.Count();

        System.out.println("Number o elements in ll are : "+iRet);

    }
}