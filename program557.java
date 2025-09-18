import java.util.*;
import java.time.LocalDate;
import java.io.*;

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

    public void ExportCSV()
    {
        if(Database.isEmpty())
        {
            System.out.println("--------------------------------------------------------------------");
            System.out.println("Nothing to export as database is empty");
            System.out.println("--------------------------------------------------------------------");
            return;
        }

        String FileName = "MarvellousStudy.csv";

        try(FileWriter fwobj = new FileWriter(FileName))
        {
            // Write CSV header
            fwobj.write("Date,Subject,Duration,Description\n");

            // Travel databse
            for(StudyLog sobj : Database)
            {
                //Write each record in csv
                fwobj.write(sobj.getDate() + ","+
                            sobj.getSubject()+",".replace(",", " ")+"\n"+
                            sobj.getDuration()+","+
                            sobj.getDescription().replace(",", " ")+"\n");
            }

            System.out.println("Log created sucessfully");

        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured while creating CSV.");
            System.out.println("Report this issue to Marvellous Infosystem");
        }


    }

    public void SummaryByDate()
    {
        System.out.println("--------------------------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("Nothing to display as database is empty");
            System.out.println("--------------------------------------------------------------------");
            return;
        }

        System.out.println("--------------------------------------------------------------------");
        System.out.println("-----------Summary  By Date from  Marvellous study tracker------------");
        System.out.println("--------------------------------------------------------------------");

        TreeMap<LocalDate,Double> tobj = new TreeMap<LocalDate,Double>();
        LocalDate lobj = null;
        double d, old;

        for(StudyLog sobj : Database)
        {
            lobj = sobj.getDate();
            d = sobj.getDuration();

            if(tobj.containsKey(lobj))
            {
                old = tobj.get(lobj);
                tobj.put(lobj, d +old);
            }
            else
            {
                tobj.put(lobj,d);
            }
        }
        // Display the details as per date 
        for(LocalDate ldobj : tobj.keySet())
        {
            System.out.println("Date : "+ldobj+"Total study "+tobj.get(ldobj));
        }
        System.out.println("--------------------------------------------------------------------");


    }

}
class program557  //StudyTrackerStarter
{
    public static void main(String A[])
    {
        
        StudyTracker stobj = new StudyTracker();

        Scanner ScannerObj = new Scanner(System.in);

        int iChoice = 0;

        System.out.println("--------------------------------------------------------------------");
        System.out.println("--------WelCome to Marvellous Study Tracker Application-------------");
        System.out.println("--------------------------------------------------------------------");

        do
        {
            System.out.println("Please select appropriate option ");
            System.out.println("1 : Insert new log into Database");
            System.out.println("2 : View All Study logs");
            System.out.println("3 : Summary of Study log by Date");
            System.out.println("4 : Summary of Study log by Subject");
            System.out.println("5 : Export Study log to CSV file");
            System.out.println("6 : Exit");

            iChoice = ScannerObj.nextInt();

            switch (iChoice) 
            {
                case 1:         //Insert new log into Database

                    stobj.InsertLog();
                    break;
                case 2:         //View All Study logs
                    stobj.DisplayLog();
                    break;
                case 3:         //Summary of Study log by Date
                    stobj.SummaryByDate();
                    break;

                case 4:         //Summary of Study log by Subject
                    break;

                case 5:         //Export Study log to CSV file

                    stobj.ExportCSV();
                    break;

                case 6:         // Exit

                    System.out.println("-------------------------------------------------------------------");
                    System.out.println("---------------Thank you for using Marvellous Application----------");
                    System.out.println("--------------------------------------------------------------------");
                    break;
                default:
                    System.out.println("Please enter valid option");

                
            }
            
            
        }while(iChoice != 6);


        
    }

    
}
