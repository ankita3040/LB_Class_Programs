#include<stdio.h>

void Display()
{
    // local static
    static int iCnt = 0;

        
    printf("Jay Ganesh !!!\n %d",iCnt);
    iCnt++;
    Display();
    
}

int main()
{
    Display();
    return 0;
}

// before main c startup routen calls


// learn concept of core dump 