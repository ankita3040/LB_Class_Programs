
///////////////////////////////////////////////////////////////////////////////
// File Name   :  program2.c
// Description :  Used to know the ticket price dependence on age 
// Autor       :  Ankita Anil Patil
// Date        :  04/05/2025
///////////////////////////////////////////////////////////////////////////////


/*
    start
        if age is less than 5 there will no ticket
        if age is less than 18 then ticket price is 700
        if age is less than  50 then ticket price is 999
        if age is greater than 50 then ticket price is 500
    stop
*/
#include<stdio.h>
# define ERR_INVALID_AGE -1

int main()
{
    int iAgeValue=0;
    int iRet=0;

    printf("Enter Age :");
    scanf("%d",&iAgeValue);

    iRet = CalculateTicket(iAgeValue);

    if(iRet == ERR_INVALID_AGE)
    {
        printf("Unable to calculate price  as age is invalid \n");
    }
    else
    {
        printf("Your ticket price is  %d\n",iRet);
    }
    return 0;

}

int CalculateTicket(int iAge)
{
    int iPrice = 0;

    if(iAge < 0)
    {
        
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        iPrice = 0;
    }

    else if((iAge > 5) && (iAge <= 18))
    {
        iPrice = 700;
    }

    else if((iAge >= 18) && (iAge <= 50))
    {
        iPrice = 999;
    }

    else if(iAge > 50 )
    {
        iPrice = 500;
    }

    return iPrice;
}
