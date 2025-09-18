#include<stdio.h>

int countCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = countCapital(Arr);

    printf("Number of capital character : %d\n",iRet);

    return 0;
}