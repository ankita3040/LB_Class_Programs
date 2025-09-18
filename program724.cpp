///////////////////////////////////////////////////////////////////////
//
//  Header files inclusion
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<string.h>
#include<stdbool.h>

#include<iostream>

using namespace std;

///////////////////////////////////////////////////////////////////////
//
//  User defined Macros
//
///////////////////////////////////////////////////////////////////////

// Max file size
# define MAXFILESIZE 100   

// Maximum number of file that we can open
# define MAXOPENEDFILES 20      

//Maximum number of file that we want to create
# define MAXINODE 5            

# define READ 1
# define WRITE 2
# define EXECUTE 4

# define REGULARFILE 1
# define SPECIALFILE 2

# define START 0
# define CURRENT 1
# define END 2

# define EXECUTE_SUCCESS 0


 
///////////////////////////////////////////////////////////////////////
//
//  User defined Macros for error handling
//
///////////////////////////////////////////////////////////////////////

# define ERR_INVALID_PARAMETER -1
# define ERR_NO_INODES -2
# define ERR_FILE_ALREADY_EXIST -3
# define ERR_FILE_NOT_EXIST -4
# define ERR_PERMISIION_DENIED -5
# define ERR_INSUFFICIENT_SPACE -6
# define ERR_INSUFFICIENT_DATA -7

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock 
//  Description :       Holds information to boot the operating system
//
///////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock 
//  Description :       Holds information about the file system
//
///////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    Inode 
//  Description :       Holds information about the file
// 
///////////////////////////////////////////////////////////////////////

typedef struct Inode
{
    char FileName[50];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int LinkCount;
    int Permission;
    char *Buffer;
    struct Inode *next;
}INODE, *PINODE, **PPINODE;

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    FileTable 
//  Description :       Holds information about the opened file
// 
///////////////////////////////////////////////////////////////////////

typedef struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Count;
    int Mode;
    PINODE ptrinode;
}FILETABLE, *PFILETABLE;

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    UAREA 
//  Description :       Holds information about the process
// 
///////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[50];
    PFILETABLE UFDT[MAXOPENEDFILES];
};

///////////////////////////////////////////////////////////////////////
//
//  Global variables or objects used in the project
// 
///////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
PINODE head = NULL;
UAREA uareaobj;

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAREA
//  Description :       It is used to intialise the contents UAREA
//  Author :            Ankita Anil Patil
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;

    while(i < MAXOPENEDFILES)
    {
        uareaobj.UFDT[i] = NULL;
        i++;
    }
    cout<<"Marvellous CVFS : UAREA initialised succesfully\n";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperblock
//  Description :       It is used to intialise the contents of super block
//  Author :            Ankita Anil Patil
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void InitialiseSuperblock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    cout<<"Marvellous CVFS : Superblock initialised succesfully\n";
}


///////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB
//  Description :       It is used to create Linked List of Inodes
//  Author :            Ankita Anil Patil
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    while(i <= MAXINODE)
    {
        newn = new INODE;

        newn->InodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->LinkCount = 0;
        newn->Permission = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;   
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

    cout<<"Marvellous CVFS : DILB created succesfully\n";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     StartAuxilaryDataInitialisation
//  Description :       It is used to intialise the Auxilary data
//  Author :            Ankita Anil Patil
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void StartAuxilaryDataInitialisation()
{

    strcpy(bootobj.Information,"Boot process of Opertaing System done");

    cout<<bootobj.Information<<"\n";

    InitialiseSuperblock();

    CreateDILB();

    InitialiseUAREA();
    
    cout<<"Marvellous CVFS : Auxilary data initalised succesfully\n";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp
//  Description :       It is used to Display the information about commands
//  Author :            Ankita Anil Patil
//  Date :              11/08/2025
//
///////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("---------------------------------------------------------\n");
    printf("----------- Command Manual of Marvellous CVFS -----------\n");
    printf("---------------------------------------------------------\n");

    printf("man   : It is used to display the specific manual page command\n");
    printf("exit  : It is used to terminate the shell of Marvellous CVFS\n");
    printf("clear : It is used to clear the console of Marvellous CVFS\n");
    printf("creat : It is used to craete new regular file\n");
    printf("Unlink : It is used to delete existing regular file\n");
    printf("ls : It is used list out all file deom our system \n");
    printf("stat : It is used to display statistics  information from file\n");
    printf("write : It is used to write data into the file\n");
    printf("read : It is used to read data from the file\n");

    // Add more options here

    printf("---------------------------------------------------------\n");
}


///////////////////////////////////////////////////////////////////////
//
//  Function Name :     ManPage
//  Description :       It is used to Display the manual page of the command
//  Input :             It accepts the command name
//  Output :            Displays the manual details of the command
//  Author :            Ankita Anil Patil
//  Date :              11/08/2025
//
///////////////////////////////////////////////////////////////////////

void ManPage(
                char *name      // Name of command
            )
{
    if(strcmp(name,"creat") == 0)
    {
        printf("Description : This command is used to create new regular file on our file system\n");

        printf("Usage : creat File_name Permissions\n");
        printf("File_name : The name of file that you want to create\n");
        printf("Permissions : \n1 : Read \n2 : Write \n3 : Read + Write\n");
    }
    else if(strcmp(name,"exit") == 0)
    {
        printf("Description : This command is used to terminate the Marvellous CVFS\n");

        printf("Usage : exit\n");     
    }

    else if(strcmp(name,"Unlink") == 0)
    {
        printf("Description : This command is used to delete regular file from our file system\n");

        printf("Usage : Unlink File_name \n");
        printf("File_name : The name of file that you want to delete\n");
        
    }

    else if(strcmp(name,"stat") == 0)
    {
        printf("Description : This command is used to display statistical informtion about file\n");

        printf("Usage : stat File_name \n");
        printf("File_name : The name of file whose information that you wnat to display\n");
        
    }

    else if(strcmp(name,"ls") == 0)
    {
        printf("Description : This command is used to  list out all file from directory\n");

        printf("Usage : ls \n");
       
        
    }
    else if(strcmp(name,"write") == 0)
    {
        printf("Description : This command is used to  write content into file\n");

        printf("Usage : write File_Descriptor \n");
        printf("File Descriptor : Value return by creat system call\n ");
       
        
    }

    else if(strcmp(name,"read") == 0)
    {
        printf("Description : This command is used to  read data from the file\n");

        printf("Usage : read File_Descriptor size \n");
        printf("File Descriptor : Value return by creat system call\n ");
        printf("Size : Number of bytes that you want read\n");
       
        
    }

    // Add more options here
    else
    {
        printf("No manual entry for %s\n",name);
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     IsFileExists
//  Description :       It is used to check whether the given file name is exist or not
//  Input :             It accepts the file name
//  Output :            It returns boolean value (True : if present False : if not present)
//  Author :            Ankita Anil Patil
//  Date :              11/08/2025
//
///////////////////////////////////////////////////////////////////////

bool IsFileExists(
                    char *name  // Name of file that we want to check
                )
{
    PINODE temp = head;
    bool bFlag = false;

    while(temp != NULL)
    {
        if((strcmp(name, temp->FileName) == 0) && (temp->FileType == REGULARFILE))
        {
            bFlag = true;
            break;
        }

        temp = temp->next;
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateFile
//  Description :       It is used to create a new regular file
//  Input :             It accepts the file name and permission
//  Output :            It returns the file descriptor
//  Author :            Ankita Anil Patil
//  Date :              11/08/2025
//
///////////////////////////////////////////////////////////////////////

int CreateFile(
                char *name,         // Name of file
                int permission      // Permission to create file
            )
{
    PINODE temp = head;
    int i = 0;

    printf("Current inodes remaining : %d\n",superobj.FreeInodes);
    // Filters

    // If file name is missing
    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    // If entered permission is invalid
    if(permission < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    // Check whether empty inode is there or not
    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }
    
    // Check whether file is already exist or not
    if(IsFileExists(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    // Loop to search free Inode
    while(temp != NULL)
    {
        if(temp->FileType == 0)
        {
            break;
        }
        temp = temp -> next;
    }

    // Inode not found
    if(temp == NULL)
    {
        printf("Inode not found\n");
        return ERR_NO_INODES;
    }

    // Search first non NULL value from UFDT
    for(i = 0; i < MAXINODE; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    if(i == MAXINODE)
    {
        printf("Unable to create file as MAX OPENED FILE LIMIT REACHED\n");
        return -1;
    }

    // Allocate memory for file table
    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    // Initailise elements of File table
    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Count = 1;
    uareaobj.UFDT[i]->Mode = permission;
    
    // Connect file table with IIT
    uareaobj.UFDT[i]->ptrinode = temp;
    
    //Memory inititalization 
    strcpy(uareaobj.UFDT[i]->ptrinode->FileName, name);
    uareaobj.UFDT[i]->ptrinode->FileSize = MAXFILESIZE;
    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;
    uareaobj.UFDT[i]->ptrinode->FileType = REGULARFILE;
    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 1;
    uareaobj.UFDT[i]->ptrinode->LinkCount = 1;
    uareaobj.UFDT[i]->ptrinode->Permission = permission;

    // Allocate memory for Buffer

    uareaobj.UFDT[i]->ptrinode->Buffer = (char * )malloc(MAXFILESIZE);

    // Decrement the number of free inode by 1
    superobj.FreeInodes--;

    return i;
}


///////////////////////////////////////////////////////////////////////
//
//  Function Name :     UnlinkFile
//  Description :       It is used to delete a  regular file
//  Input :             It accepts the file name 
//  Output :            It returns nothing
//  Author :            Ankita Anil Patil
//  Date :              15/08/2025
//
///////////////////////////////////////////////////////////////////////

// Delete file Marvellous CVSF> Unlink demo.txt
int UnlinkFile(
                char *name  // Name of file that you want to delete
                )
{
    int i = 0;

    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExists(name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    for(i = 0; i < MAXINODE ; i++)
    {   
        if(uareaobj.UFDT[i] != NULL)
        {
            if(strcmp (uareaobj.UFDT[i]->ptrinode->FileName, name) == 0)
            {
                    //Deallocate memory of buffer
                    free (uareaobj.UFDT[i]->ptrinode->Buffer);

                    //Reset all value of inode
                    uareaobj.UFDT[i]->ptrinode->FileSize = 0;
                    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;
                    uareaobj.UFDT[i]->ptrinode->LinkCount = 0;
                    uareaobj.UFDT[i]->ptrinode->Permission = 0;
                    uareaobj.UFDT[i]->ptrinode->FileType = 0;
                    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 0; 

                    //Deallocate memory of filetable
                    free(uareaobj.UFDT[i]);

                    //set NUll to the UFDT member
                    uareaobj.UFDT[i] = NULL;

                    //Increment value of  free inodes count
                    superobj.FreeInodes++;

                    break;
            }// End of if
        }   // End of if
    }   // End of for
    return EXECUTE_SUCCESS;
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     ls_file
//  Description :       It is used to display information about all files in the director
//  Input :             nothing
//  Output :            nothing
//  Author :            Ankita Anil Patil
//  Date :              15/08/2025
//
///////////////////////////////////////////////////////////////////////

void ls_file()
{
    PINODE temp = head;

    while(temp != NULL)
    {
        if(temp->FileSize != 0)
        {
            printf("%s\n",temp->FileName);
        }
        temp = temp->next;
    }

}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     stat_file
//  Description :       It is used to display the information about file name
//  Input :             It accepts the file name 
//  Output :            It returns nothing
//  Author :            Ankita Anil Patil
//  Date :              15/08/2025
//
//////////////////////////////////////////////////////////////////////

// Marvellous CVSF > stat demo.txt
int stat_file(
                char *name  // Name of file that you want display the information
                )
{
    

    PINODE temp = head;

    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExists(name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    while (temp != NULL)
    {
        if((strcmp(name,temp->FileName) == 0) &&  (temp->FileType != 0))
        {
            cout<<"----------statistical information of the file------------\n";

            printf("File name : %s\n",temp->FileSize);
            printf("File size on disk : %d\n",temp->FileSize);
            printf("Actual file size  : %d\n",temp->ActualFileSize);
            printf("Link count  : %d\n",temp->LinkCount);
            printf("File Permission   : ");
            if(temp->Permission == READ)
            {
                printf("Read\n");

            }
            else if(temp->Permission == WRITE)
            {
                printf("Read\n");
            }
             else if(temp->Permission == READ + WRITE)
            {
                printf("Read + Write\n");
            }
           
            printf("File Type : ");

            if(temp->FileType == REGULARFILE)
            {
                printf("Regular File \n");
            }
            else if(temp->FileType == SPECIALFILE)
            {
                printf("Special File \n ");
            }

            cout<<"---------------------------------------------------------\n";
        }

        temp = temp->next;
    }

    return EXECUTE_SUCCESS;
   
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     write_file
//  Description :       It is used to write content into the file
//  Input :             It accepts the file descriptor
//                      Address of buffer which contains data
//                      size of data that we want to write
//  Output :            Number of bytes successfully written into the file
//  Author :            Ankita Anil Patil
//  Date :              15/08/2025
//
//////////////////////////////////////////////////////////////////////

// Marvellous CVSF > write 3

int write_file(
                int fd,         //File Descriptor of file
                char *data,     // Data that we want to write
                int size)       // Size of data that we want to write
{
   
    printf("File descriptor : %d\n",fd);
    printf("Data that we want to write : %s\n",data);
    printf("Number of bytes  : %d\n",size);
    
    //Invalid value of fd
    if(fd < 0 || fd >MAXOPENEDFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    // File is not opened or create with given fd
    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    // if there i no permission to write the data into the file
    if(uareaobj.UFDT[fd]->ptrinode->Permission < WRITE)
    {
        return ERR_PERMISIION_DENIED;
    }

    // Uable to write as there is not sufficient space
    if((MAXFILESIZE - uareaobj.UFDT[fd]->WriteOffset) < size)
    {
        return ERR_INSUFFICIENT_SPACE;
    } 

    //calculate the actual offset, //write the actual data
    strncpy(uareaobj.UFDT[fd]->ptrinode->Buffer + uareaobj.UFDT[fd]->WriteOffset,data,size);
    
    
    // update the write offset
    uareaobj.UFDT[fd]->WriteOffset = uareaobj.UFDT[fd]->WriteOffset + size;

    //Update the actual file size afetr writing the new data
    uareaobj.UFDT[fd]->ptrinode->ActualFileSize = uareaobj.UFDT[fd]->ptrinode->ActualFileSize + size;



    return size;

}


///////////////////////////////////////////////////////////////////////
//
//  Function Name :     read_file
//  Description :       It is used to raed content from the file
//  Input :             File Descriptor
//                      Address of empty buffer 
//                      size of data that we want to read
//  Output :            Number of bytes successfully read from the file
//  Author :            Ankita Anil Patil
//  Date :              15/08/2025
//
//////////////////////////////////////////////////////////////////////

int read_file(
            int fd,             // File descriptor
            char *data,         // Address of empty buffer
            int size            //No of bytes that we wnat to read
                )
{

    //Invalid value of fd
    if(fd < 0 || fd >MAXOPENEDFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(data == NULL || size <= 0)
    {
        return ERR_INVALID_PARAMETER;
    }
    // File is not opened or create with given fd
    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    // if there i no permission to write the data into the file
    if(uareaobj.UFDT[fd]->ptrinode->Permission < READ)
    {
        return ERR_PERMISIION_DENIED;
    }

    // Uable to read as there is not sufficient data
    if((MAXFILESIZE - uareaobj.UFDT[fd]->ReadOffset) < size)
    {
        return ERR_INSUFFICIENT_DATA;
    } 


    strncpy(data, uareaobj.UFDT[fd]->ptrinode->Buffer + uareaobj.UFDT[fd]->ReadOffset,size);

    uareaobj.UFDT[fd]->ReadOffset = uareaobj.UFDT[fd]->ReadOffset + size;

    return size;
}


///////////////////////////////////////////////////////////////////////
//
//  Entry point function of project (main)
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    int iCount = 0;
    int iRet = 0;
    char Command[5][80];
    char InputBuffer[MAXFILESIZE] = {'\0'};

    char *EmptyBuffer = NULL;

    StartAuxilaryDataInitialisation();

    cout<<"---------------------------------------------------------\n";
    cout<<"--------- Marvellous CVFS Started Succesfully ------------\n";
    cout<<"----------------------------------------------------------\n";
    
    while(1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\nMarvellous CVFS > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s",Command[0],Command[1], Command[2], Command[3]);

        fflush(stdin);
        if(iCount == 1)
        {
            // Marvellous CVFS > exit

            if(strcmp(Command[0], "exit") == 0)
            {
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating all resources...\n");

                break;
            }

            // Marvellous CVFS > help
            
            else if(strcmp(Command[0], "help") == 0)
            {
                DisplayHelp();
            }

            // Marvellous CVFS > clear

            else if(strcmp(Command[0], "clear") == 0)
            {
                system("clear");
            }

            // Marvellous CVFS > ls

            else if(strcmp(Command[0], "ls") == 0)
            {
                ls_file();
            }

            else
            {
                printf("Coomand not found...\n");
                printf("Please refer Help option or use man command\n");
            }   // End of invalid command part

        }   // End of if iCount == 1



        else if(iCount == 2)
        {
            // Marvellous CVFS > man creat

            if(strcmp(Command[0], "man") == 0)
            {
                ManPage(Command[1]);
            }

            // Marvellous CVFS > Unlink demo.txt
            else if(strcmp(Command[0], "Unlink") == 0)
            {
                iRet = UnlinkFile(Command[1]);

                if(iRet == EXECUTE_SUCCESS)
                {
                    printf("Unlink operation successfully performed\n");
                }

                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error :  Unable to unlink activity as file is not present\n");
                }

                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameters for the function\n");
                    printf("Please check Man page for more details\n");

                }
            }

            // Marvellous CVFS > stat demo.txt
            else if(strcmp(Command[0], "stat") == 0)
            {
                iRet = stat_file(Command[1]);

                
                if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error :  Unable to  display statistics as file is not present\n");
                }

                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameters for the function\n");
                    printf("Please check Man page for more details\n");

                }
            }

            // Marvellous CVFS > write 3
            else if(strcmp(Command[0], "write") == 0)
            {
                printf("Please enter data that you want to write into the file\n");
                fgets(InputBuffer,MAXFILESIZE,stdin);

               iRet =  write_file(atoi(Command[1]),InputBuffer,strlen(InputBuffer)-1);

               if(iRet == ERR_INSUFFICIENT_SPACE)
               {
                    printf("Error : Insufficient space of data block in the file\n");
               }
               else if (iRet == ERR_PERMISIION_DENIED)
               {
                    printf("Error : Uable to write as there is no write permisiion\n");
               }
               else if(iRet == ERR_INVALID_PARAMETER)
               {
                    printf("Error : Invalid parameters for the function\n");
                    printf("Please check Man page for more details\n");
               }

               else if(iRet == ERR_FILE_NOT_EXIST)
               {
                    printf("Error : FD is invalid \n");
               }
               else
               {
                printf(" %d bytes get successfully written into the file\n",iRet);
                printf("Data from file : %s",uareaobj.UFDT[0]->ptrinode->Buffer);
               }


            }
            else
            {
                printf("Coomand not found...\n");
                printf("Please refer Help option or use man command\n");
            }   // End of invalid command part

        }   // End of if iCount == 2
        
        else if(iCount == 3)
        {
            // Marvellous CVFS > creat Ganesh.txt 3

            if(strcmp(Command[0], "creat") == 0)
            {
                iRet = CreateFile(Command[1], atoi(Command[2]));

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameters for the function\n");
                    printf("Please check Man page for more details\n");
                }
                else if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create file as there is no Inodes\n");
                }
                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create file as file is already existing\n");
                }
                else
                {
                    printf("File is succesfully created with FD : %d\n",iRet);
                }

            }
            // Marvellous CVSF > read 3 10
            else if((Command[0], "read") == 0)
            {   
                EmptyBuffer = (char *)malloc(sizeof(atoi(Command[2])));

                iRet = read_file(atoi(Command[1]),EmptyBuffer,atoi(Command[2]));

                if (iRet == ERR_PERMISIION_DENIED)
                {
                    printf("Error : Uable to write as there is no write permisiion\n");
               }
               else if(iRet == ERR_INVALID_PARAMETER)
               {
                    printf("Error : Invalid parameters for the function\n");
                    printf("Please check Man page for more details\n");
               }

               else if(iRet == ERR_FILE_NOT_EXIST)
               {
                    printf("Error : FD is invalid \n");
               }

               else if(iRet == ERR_INSUFFICIENT_DATA)
               {
                    printf("Error : Insufficient data  in the file\n ");
               }
               else
               {
                    printf("Read operation is successful\n");
                    printf("Data from file : %s\n ",EmptyBuffer);

                    free (EmptyBuffer);
               }

                
            }

            else
            {
                printf("Coomand not found...\n");
                printf("Please refer Help option or use man command\n");
            }   // End of invalid command part


        }   // End of if iCount == 3
        
        else if(iCount == 4)
        {

        }   // End of if iCount == 4
        
        else
        {
            printf("Coomand not found...\n");
            printf("Please refer Help option or use man command\n");
        }   // End of invalid command part

    }   // End of while (Custom Shell)

    return 0;
}   // End of main