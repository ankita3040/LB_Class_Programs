import java.util.*;

class StudyLog
{
    public String Subject;
    public double Duration;
    public String Description;

    public StudyLog(String A, Double B, String C)
    {
        this.Subject = A;
        this.Duration = B;
        this.Description = C;

    }

    public void Display()
    {
        System.out.println(Subject+ " | "+Duration +" | "+Description);
    }

    public String toString()
    {
        return "Inside to String";
    }

}
class program545
{
    public static void main(String A[])
    {
        StudyLog sobj1 = new StudyLog("C", 2.5, "Pointer and array");
        StudyLog sobj2 = new StudyLog("C++", 3.5, "Polymorphism");
        StudyLog sobj3 = new StudyLog("Java", 4.5, "Collection");

        System.out.println(sobj1);
        System.out.println(sobj2);
        System.out.println(sobj3);
    }

    
}
