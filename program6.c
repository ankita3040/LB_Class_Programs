///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Used to Class dependence on percentage 
// Autor       :  Ankita Anil Patil
// Date        :  04/05/2025
///////////////////////////////////////////////////////////////////////////////

/*
    start
         Accept percentage from user
            if percentage is less tha 0 and greater than 100
                Display as invalid input
            if percentage is greater than 0 and less than 35
                Display as fail
            if percentage is greater than 35 and less than 50
                Display as pass
            if percentage is greater than 50 and less than 60
                Display as second class
            if percentage is greater than 60 and less than 70
                Display as first class
            if percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
*/

#include<stdio.h>

void DisplayClass(float fPerc)
{
    if((fPerc < 0.0f)  || (fPerc > 100.0f))
    {
        printf("Unable to proceed as input is invalid  \n");
        return;
    }

    if((fPerc > 0.0f) && (fPerc < 35.0f))
    {
        printf("You are Fail\n");
    }

    else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass Class\n");
    }

    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("Second Class\n");
    }
    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("First Class\n");
    }
    else if((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("First class with distinction\n");
    }

    
}

int main()
{
    float fValue=0.0f;
    printf("Enter your percentage :");
    scanf("%f",&fValue);
    
    DisplayClass(fValue);
    return 0;
}
