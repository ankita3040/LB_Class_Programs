#include<stdio.h>

int countSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = countSmall(Arr);

    printf("Number of small character : %d\n",iRet);

    return 0;
}