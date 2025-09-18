class node
{
    public char data;
    public node next ;
}

class QueueX
{
    private node first;
    private int iCount;


    QueueX()
    {
        System.out.println("Inside constructor");
        this.first = null;
        this.iCount = 0;

    }

    public void enqueue(char ch) // Insertlast
    {
        node newn = new node();

        node temp = null;

        newn.data = ch;
        newn.next = null;

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = this.first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        
        iCount++;

    }

    public char dequeue()       // Deletefirst
    {
        node temp = null;
        temp = this.first;

        if(this.first == null ) 
        {
            System.out.println("Unable to pop queue is empty");
            return (char) -1; // 
        }
        else
        {
            first = first.next;
            iCount--;
            return temp.data;

        }

    }

    public void display()
    {
        node temp = null;
        temp = this.first;

        while(temp != null)
        {
            System.out.print("| " +temp.data+" |-");
            temp = temp.next;
        }

        System.out.println();

    }

    public int Count()
    {
        return iCount;
    }

}


class program383
{
    public static void main(String A[])
    {
        QueueX stobj = new QueueX();
        int iRet = 0;
        char cRet = '\0';

        stobj.enqueue('A');
        stobj.enqueue('B');
        stobj.enqueue('C');
        stobj.enqueue('D');
        stobj.enqueue('E');


        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the queue are  "+iRet);

        cRet = stobj.dequeue();

        System.out.println("Removed element from queue : "+cRet);

        cRet = stobj.dequeue();

        System.out.println("Removed element from queue : "+cRet);

        cRet = stobj.dequeue();

        System.out.println("Removed element from queue : "+cRet);

        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the queue are  "+iRet);


    }
}