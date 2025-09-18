/////////////////////////////////////////////////////////////////////////////////////////
//
// Header file inclusion
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<string.h>
#include<stdbool.h>
#include<iostream>

using namespace std;


////////////////////////////////////////////////////////////////////////////////////////
//
// User defined Macros
//
////////////////////////////////////////////////////////////////////////////////////////


# define MAXSIZE 100

# define MAXINODE 5

# define READ 1
# define WRITE 2
# define EXECUTE 3

# define REGULARFILE 1
# define SPECIALFILE 2

# define START 0 
# define CURRENT 1
# define END 2

////////////////////////////////////////////////////////////////////////////////////////
//
// User defined Macros for error handling
//
////////////////////////////////////////////////////////////////////////////////////////

# define ERR_INVALID_PARAMETER -1
# define ERR_NO_INODES -2
# define ERR_FILE_ALREADY_EXIT -3

////////////////////////////////////////////////////////////////////////////////////////
//
// Structure name : BootBlock
// Description : Holds the information to boot the operating
//
////////////////////////////////////////////////////////////////////////////////////////
struct BootBlock
{
    char Information[100];

};


/////////////////////////////////////////////////////////////////////////////////////////
//
// Structure name : SuperBlock
// Description : Holds the information of file system
//
////////////////////////////////////////////////////////////////////////////////////////


struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;

};

/////////////////////////////////////////////////////////////////////////////////////////
//
// Structure name : Inode
// Description : Holds information about the file
//
////////////////////////////////////////////////////////////////////////////////////////

 typedef struct Inode
{
    char FileName[50];
    int INodeNumber ;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    int LinkCount;
    char *Buffer;
    struct Inode *next;

}INODE, *PINODE, **PPINODE;

/////////////////////////////////////////////////////////////////////////////////////////
//
// Structure name : FileTable
// Description : Holds information about the opened file
//
////////////////////////////////////////////////////////////////////////////////////////

typedef struct FileTable
{
    int ReadOffset ;
    int WriteOffset;
    int Count;
    int Mode;
    PINODE ptrinode;
}FILETABLE,*PFILETABLE;


/////////////////////////////////////////////////////////////////////////////////////////
//
// Structure name : UAREA
// Description : Holds information about the process
//
////////////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[50];
    PFILETABLE UFDT[MAXINODE];
};

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Global variable or object used in project
//
////////////////////////////////////////////////////////////////////////////////////////

SuperBlock superobj;
PINODE head = NULL;
UAREA uareaobj;
BootBlock bootobj;

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : InitializeUAREA
// Description :   It is used to initilise the contents of UFDT
// Author :        Ankita Anil Patil
// Date            10/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

void InitializeUAREA()
{
    strcpy(uareaobj.ProcessName ,"myexe");

    int i = 0;

    while(i < MAXINODE)
    {
        uareaobj.UFDT[i] = NULL;
        i++;
    }

     cout<<"Marvellous CVSF :  UAREA innitialized  successfully \n";

}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : InitializeSuperBlock
// Description :   It is used to initilise the contents of super block
// Author :        Ankita Anil Patil
// Date            10/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

void InitializeSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    cout<<"Marvellous CVSF : SuperBloack innitialized  successfully \n";

}


/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CreateDILB
// Description :   It is used to craete linked list of inode
// Author :        Ankita Anil Patil
// Date            10/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    while(i <= MAXINODE)
    {
        newn = new INODE;

        newn->INodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->LinkCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;

        }

        i++;

        
    }
    cout<<"Marvellous CVSF :  DILB created successfully \n";

}


/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StartAuxilaryDataInitilisation
// Description :   It is used to initilise the Auxilary data
// Author :        Ankita Anil Patil
// Date            10/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

void StartAuxilaryDataInitilisation()
{
    strcpy(bootobj.Information, "Boot block of operating system in done");
    cout<<bootobj.Information<<"\n";

    InitializeSuperBlock();

    CreateDILB();

    InitializeUAREA();

    cout<<"Marvellous CVSF :  Auxilary data initialized  successfully \n";

}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayHelp
// Description :   It is used to Display the infirmation about commands
// Author :        Ankita Anil Patil
// Date            11/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("---------------------------------------------------------------------------------\n");
    printf("---------------------Command Manual of Marvellous CVSF---------------------------\n");
    printf("---------------------------------------------------------------------------------\n");

    printf("exit : It is used to terminate the shell of Marvellous CVSF\n");
    printf("clear : It is used to clear console of Marvellous CVSF");

     // Add more oprtion here

    printf("---------------------------------------------------------------------------------\n");
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ManPage
// Description :   It is used to Display the manual page of the command
// Input :         It accept command name 
// Output :        Display the manual details of the command
// Author :        Ankita Anil Patil
// Date            11/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

void ManPage(
            char *name      // Name of command
            )
{   
    if(strcmp(name , "creat") == 0)
    {
        printf("Description :  This command is used to create new regular file on put file system\n");

        printf("Usage : Craete File_Name Permisiion\n");
        printf("File_Name : The name of file taht you want to craere \n");
        printf("Permission : \n1 : Read \n2 : Write \n3 : Read + Write ");
        
        
    }
    else if(strcmp(name,"exit") == 0)
    {
        printf("exit : It is used to terminate the shell of Marvellous CVSF\n");
        printf("Usage : Exit\n");
        
    }

    // Add more oprtion here
    else
    {
        printf("No manual entry for %s\n",name);
    }
   
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : IsFileExits
// Description :   It is used to check whether given file name is exits or not
// Input :         It accept file name 
// Output :        It returns boolean value (True : if present False : if not present)
// Author :        Ankita Anil Patil
// Date            11/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

bool IsFileExits(               // Helper function
                char *name      //Name of file that we want to check
                )
{
    PINODE temp = head;
    bool bFlag = false;
    while(temp != NULL)
    {
        if((strcmp(name,temp->FileName )== 0) && (temp->FileType == REGULARFILE))
        {
            bFlag =  true;
            break;            
        }

        temp = temp->next;
    }

    return bFlag;
}
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CreateFile
// Description :   It is used to create new regular file
// Input :         It accept file name and permisiion
// Output :        It returns the file descriptor
// Author :        Ankita Anil Patil
// Date            11/08/2025
//
//
////////////////////////////////////////////////////////////////////////////////////////

int CreateFile(
            char *name,         // Name of file
            int permisiion      // Premission to crate file
        )
{
    //Filters
    //if file name is missing 
    if(name == NULL )
    {
        return ERR_INVALID_PARAMETER;
    }

    // if entered permision is invalid
    if(permisiion < 1 || permisiion > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    //Check whether empty inode is there or not
    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }

    // check whether file is already exits or not
    if(IsFileExits(name) ==  true)
    {
        return ERR_FILE_ALREADY_EXIT;  
    }

        

}
//////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function of project(main)
//
//////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char str[80] = {'\0'};
    int iCount = 0;
    int iRet = 0;
    char Command[5][80];
    

    StartAuxilaryDataInitilisation();
    
    cout<<"---------------------------------------------------------------------------------\n";
    cout<<"--------------------Marvellous CVSF Started Successfully-------------------------\n";
    cout<<"---------------------------------------------------------------------------------\n";

    while(1)
    {
        fflush(stdin); 
        printf("\nMarvellous CVSF > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);

        
        if(iCount == 1)
        {
            // Marvellous CVSF > exit
            if(stricmp(Command[0], "exit") == 0)
            {
                printf("Thank you for using Marvellous CVSF \n");
                printf("Deallocating all resources....\n");

                break;
            }

            // Marvellous CVSF > Help
            else if(stricmp(Command[0],"Help") == 0)
            {
                DisplayHelp();
            }

            // Marvellous CVSF > cls
            else if(strcmp(Command[0],"clear") == 0)
            {
                system("clear");
            }

        } // End of if iCount == 1

        else if(iCount == 2)
        {
            // Marvellous CVSF > man create
            if(strcmp(Command[0],"man") == 0)
            {
                ManPage(Command[1]);
            }


        } // End of if iCount == 2

        else if(iCount == 3)
        {
            // Marvellous CVSF > creat Ganesh.txt 3
            if(strcmp(Command[0] ,"creat") == 0)
            {
                iRet = CreateFile(Command[1],atoi(Command[2])); // atoi -> ascii to integer

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameters for function\n");
                    printf("Please check man for more details\n");
                }
                else if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create file as there is no inodes\n");
                }
                
                else if(iRet == ERR_FILE_ALREADY_EXIT)
                {
                    printf("Error : Unable to create file as file is already is exit\n ");
                }
            }

        } // End of if iCount == 3

        else if(iCount == 4)
        {

        } // End of if iCount == 4

        else
        {
            printf("Command not found \n");
            printf("Please refer Help option or use man command");

        } // End of  invalid command part 

    } //End of while(Custom SHell)

    return 0;

} // End of main

