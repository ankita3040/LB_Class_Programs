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

class program386

{
    public static void main(String A[])
    {
       
        StackX<Integer>  stobj1= new StackX<>();
        int iRet = 0;

        stobj1.push(10);
        stobj1.push(20);
        stobj1.push(30);
        stobj1.push(40);
        stobj1.push(50);


        stobj1.display();

        iRet = stobj1.Count();

        System.out.println("Number of elements in the stack are  "+iRet);

        iRet = stobj1.pop();

        System.out.println("Popped element from stack : "+iRet);

        iRet = stobj1.pop();

        System.out.println("Popped element from stack : "+iRet);

        iRet = stobj1.pop();

        System.out.println("Popped element from stack : "+iRet);

        stobj1.display();

        iRet = stobj1.Count();

        System.out.println("Number of elements in the stack are  "+iRet);
       
       /////////////////////////////////////////////////////////////////////////////////////////////////////////////

        StackX<String>  stobj2= new StackX<>();
        String str = null;

        stobj2.push("C");
        stobj2.push("C++");
        stobj2.push("Java");
        stobj2.push("Python");
        stobj2.push("Javascript");


        stobj2.display();

        iRet = stobj2.Count();

        System.out.println("Number of elements in the stack are  "+iRet);

        str = stobj2.pop();

        System.out.println("Popped element from stack : "+str);

        str = stobj2.pop();

        System.out.println("Popped element from stack : "+str);

        str = stobj2.pop();

        System.out.println("Popped element from stack : "+str);

        stobj2.display();

        iRet = stobj2.Count();

        System.out.println("Number of elements in the stack are  "+iRet);
       

    }
}