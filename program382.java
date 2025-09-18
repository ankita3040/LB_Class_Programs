class node
{
    public double data;
    public node next ;
}

class StackX
{
    private node first;
    private int iCount;


    StackX()
    {
        System.out.println("Inside constructor");
        this.first = null;
        this.iCount = 0;

    }

    public void push(double no) // Insertfirst
    {
        node newn = new node();

         
        newn.data = no;
        newn.next = null;

        newn.next = first;
        this.first = newn;

        iCount++;

    }

    public double pop()       // Deletefirst
    {
        node temp = null;
        temp = this.first;

        if(this.first == null ) // stack is empty
        {
            System.out.println("Unable to pop stack is empty");
            return -1;
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
            System.out.println("| " +temp.data+" |");
            temp = temp.next;
        }

    }

    public int Count()
    {
        return iCount;
    }

}


class program382
{
    public static void main(String A[])
    {
        StackX stobj = new StackX();
        int iRet = 0;
        double dRet = 0.0;

        stobj.push(10.20);
        stobj.push(20.33);
        stobj.push(30.72);
        stobj.push(40.89);
        stobj.push(50.91);


        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the stack are  "+iRet);

        dRet = stobj.pop();

        System.out.println("Popped element from stack : "+dRet);

        dRet = stobj.pop();

        System.out.println("Popped element from stack : "+dRet);

        dRet = stobj.pop();

        System.out.println("Popped element from stack : "+dRet);

        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the stack are  "+iRet);


    }
}