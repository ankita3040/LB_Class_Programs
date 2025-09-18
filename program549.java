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
    @Override
    public String toString()
    {
        return Subject+ " | "+Duration +" | "+Description ;
    }

}
class program549
{
    public static void main(String A[])
    {
        StudyLog sobj1 = new StudyLog("C", 2.5, "Pointer and array");
        StudyLog sobj2 = new StudyLog("C++", 3.5, "Polymorphism");
        StudyLog sobj3 = new StudyLog("Java", 4.5, "Collection");
        StudyLog sobj4 = new StudyLog("C", 1.5, "Pointer and array");
        StudyLog sobj5 = new StudyLog("C", 1.0, "Pointer and array");

        ArrayList<StudyLog> aobj = new ArrayList<StudyLog>();

        aobj.add(sobj1);
        aobj.add(sobj2);
        aobj.add(sobj3);
        aobj.add(sobj4);
        aobj.add(sobj5);

        for(StudyLog sobj : aobj)
        {
            if(sobj.Duration >= 1.5)
            {
                System.out.println(sobj);
            }
            
        }

        
    }

    
}
