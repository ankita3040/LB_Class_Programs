/////////////////////////////////////////////////////////////////////////////////////////
//
// Header file inclusion
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<string.h>

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



//////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function of project(main)
//
//////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char str[80] = {'\0'};
    int iCount = 0;
    char Command[4][80];

    StartAuxilaryDataInitilisation();
    
    cout<<"---------------------------------------------------------------------------------\n";
    cout<<"--------------------Marvellous CVSF Started Successfully-------------------------\n";
    cout<<"---------------------------------------------------------------------------------\n";

    while(1)
    {
        printf("\nMarvellous CVSF > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s");
    } //End of while(Custom SHell)

    return 0;

} // End of main

