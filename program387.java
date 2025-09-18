class node<T>
{
    public T data;
    public node<T> next ;
}

class QueueX<T>
{
    private node<T> first;
    private int iCount;


    QueueX()
    {
        System.out.println("Inside constructor");
        this.first = null;
        this.iCount = 0;

    }

    public void enqueue(T no) // Insertlast
    {
        node<T> newn = new node<T>();

        node<T> temp = null;

        newn.data = no;
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

    public T dequeue()       // Deletefirst
    {
        node<T> temp = null;
        temp = this.first;

        if(this.first == null ) 
        {
            System.out.println("Unable to pop queue is empty");
            return null;
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
        node<T> temp = null;
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


class program387
{
    public static void main(String A[])
    {
        QueueX<Integer> stobj = new QueueX<>();
        int iRet = 0;

        stobj.enqueue(10);
        stobj.enqueue(20);
        stobj.enqueue(30);
        stobj.enqueue(40);
        stobj.enqueue(50);


        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the queue are  "+iRet);

        iRet = stobj.dequeue();

        System.out.println("Removed element from queue : "+iRet);

        iRet = stobj.dequeue();

        System.out.println("Removed element from queue : "+iRet);

        iRet = stobj.dequeue();

        System.out.println("Removed element from queue : "+iRet);

        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the queue are  "+iRet);

    ////////////////////////////////////////////////////////////////////////////////////////////

    QueueX<Double> stobj1 = new QueueX<>();
        double dRet = 0.0;

        stobj1.enqueue(10.0);
        stobj1.enqueue(20.0);
        stobj1.enqueue(30.0);
        stobj1.enqueue(40.0);
        stobj1.enqueue(50.0);


        stobj1.display();

        iRet = stobj1.Count();

        System.out.println("Number of elements in the queue are  "+iRet);

        dRet = stobj1.dequeue();

        System.out.println("Removed element from queue : "+dRet);

        dRet = stobj1.dequeue();

        System.out.println("Removed element from queue : "+dRet);

        dRet = stobj1.dequeue();

        System.out.println("Removed element from queue : "+dRet);

        stobj1.display();

        iRet = stobj1.Count();

        System.out.println("Number of elements in the queue are  "+iRet);

    }
}