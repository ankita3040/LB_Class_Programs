#include<stdio.h>
#include<string.h>


int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = strlen(Arr);

    printf("Number of character in string are : %d\n",iRet);

    return 0;
}