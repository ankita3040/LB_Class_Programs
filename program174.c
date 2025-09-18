#include<stdio.h>

void countCapitalSmallDigit(char *str)
{
    int iCountCap = 0, iCountSmall = 0, iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if ((*str >= 'A') && (*str <= 'z'))
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }

        str++;

    }
    
    printf("Number of small character are : %d\n",iCountSmall);
    printf("Number of capital character  are : %d\n",iCountCap);
    printf("Number of digits  are : %d\n",iCountDigit);

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    countCapitalSmallDigit(Arr);

    return 0;
}