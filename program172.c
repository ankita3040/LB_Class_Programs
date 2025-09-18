#include<stdio.h>

void countCapitalSmall(char *str)
{
    int iCountCap = 0, iCountSmall = 0;

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
        str++;

    }
    
    printf("Number of small character are : %d\n",iCountSmall);
    printf("Number of capital character  are : %d\n",iCountCap);

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    countCapitalSmall(Arr);

    return 0;
}