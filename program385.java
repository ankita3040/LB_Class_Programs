class node<T>
{
    public T data;
    public node<T> next ;
}

class StackX<T>
{
    private node<T> first;
    private int iCount;


    StackX()
    {
        System.out.println("Inside constructor");
        this.first = null;
        this.iCount = 0;

    }

    public void push(T no) // Insertfirst
    {
        node<T> newn = new node<T>();

         
        newn.data = no;
        newn.next = null;

        newn.next = first;
        this.first = newn;

        iCount++;

    }

    public T pop()     // Deletefirst
    {
        node<T> temp = null;
        temp = this.first;

        if(this.first == null ) // stack is empty
        {
            System.out.println("Unable to pop stack is empty");
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
            System.out.println("| " +temp.data+" |");
            temp = temp.next;
        }

    }

    public int Count()
    {
        return iCount;
    }

}

class program385
{
    public static void main(String A[])
    {
       
        StackX<Integer>  stobj= new StackX<>();
        int iRet = 0;

        stobj.push(10);
        stobj.push(20);
        stobj.push(30);
        stobj.push(40);
        stobj.push(50);


        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the stack are  "+iRet);

        iRet = stobj.pop();

        System.out.println("Popped element from stack : "+iRet);

        iRet = stobj.pop();

        System.out.println("Popped element from stack : "+iRet);

        iRet = stobj.pop();

        System.out.println("Popped element from stack : "+iRet);

        stobj.display();

        iRet = stobj.Count();

        System.out.println("Number of elements in the stack are  "+iRet);
       

    }
}