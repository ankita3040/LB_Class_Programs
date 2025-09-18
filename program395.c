#include<stdio.h>

void Display()
{
    int iCnt = 0;

        
    printf("Jay Ganesh !!!\n %d",iCnt);
    iCnt++;
    Display();
    
}

int main()
{
    Display();
    return 0;
}

