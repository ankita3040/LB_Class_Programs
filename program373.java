
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
        node newn = null;       //refrence
        newn = new node();      // allocate memory on heap

        newn.data = no;
        newn.next = null;

        if(first == null)  // LL is empty
        {
            first = newn;
        }
        else            // LL contain atleast one node
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

    
}
class program373
{
    public static void main(String A[])
    {
        SinglyLLL slobj = new SinglyLLL();
        slobj.InsertFirst(51);
        slobj.InsertFirst(51);
        slobj.InsertFirst(51);

        slobj.InsertLast(101);
        slobj.InsertLast(111);
        slobj.InsertLast(121);



    }
}