#include<stdio.h>

int count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
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

    iRet = count(Arr);

    printf("frequency of a is : %d\n",iRet);

    return 0;
}