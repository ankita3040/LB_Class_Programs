#include<stdio.h>

int CharFrequency(char *str, char ch) // case sensitive
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n]s",Arr);

    
    printf("Enter the  charcter\n");
    scanf(" %c",&cValue); 

    iRet = CharFrequency(Arr,cValue);

    printf("%c occurs %d times\n",cValue,iRet);

    return 0;
}