import java.util.*;
import java.time.LocalDate;

//Done
class StudyLog
{
    public LocalDate Date;
    public String Subject;
    public double Duration;
    public String Description;
    

    public StudyLog(LocalDate A, String B, Double C, String D)
    {
        this.Date = A;
        this.Subject = B;
        this.Duration = C;
        this.Description = D;

    }
    @Override
    public String toString()
    {
        return Date+ " | " +Subject+ " | "+Duration +" | "+Description ;
    }

    // Getter methods four characteristics
    public LocalDate getDate()
    {
        return Date;
    }

    public String getSubject()
    {
        return Subject;
    }

    public double getDuration()
    {   
        return Duration;
    }
    public String getDescription()
    {
        return Description;
    }

}

class StudyTracker
{
    //Data Structure to hold the data about study
    private ArrayList<StudyLog> Database = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner ScannerObj = new Scanner(System.in);

        System.out.println("--------------------------------------------------------------------");
        System.out.println("---------------Please enter valid details of your study------------ ");
        System.out.println("--------------------------------------------------------------------");

        LocalDate DataObj = LocalDate.now();

        System.out.println("Please provide the name of subject like C/C++/Java/OS/DS");
        String sub = ScannerObj.nextLine();

        System.out.println("Enter time period of your study in hours ");
        double dur = ScannerObj.nextDouble();
        ScannerObj.nextLine(); //

        System.out.println("Please provide description about the study for future reference");
        String desc = ScannerObj.nextLine();

        StudyLog StudyObj = new StudyLog(DataObj, sub, dur, desc);

        Database.add(StudyObj);

        System.out.println("Study log get stored successfully ");
        System.out.println("--------------------------------------------------------------------");

    }

    public void DisplayLog()
    {
        System.out.println("--------------------------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("Nothing to display as database is empty");
            System.out.println("--------------------------------------------------------------------");
            return;
        }

        System.out.println("--------------------------------------------------------------------");
        System.out.println("-----------Log report from marvellous study tracker-----------------");
        System.out.println("--------------------------------------------------------------------");

        for(StudyLog sobj : Database)
        {
            System.out.println(sobj);
        }

        System.out.println("--------------------------------------------------------------------");

    }

}
class program554 //StudyTrackerStarter
{
    public static void main(String A[])
    {
        
        StudyTracker stobj = new StudyTracker();

        stobj.DisplayLog();
        
        stobj.InsertLog();
        stobj.InsertLog();
        stobj.InsertLog();

        stobj.DisplayLog();

        
    }

    
}
