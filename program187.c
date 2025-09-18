// Input : deRm2dfr
// char  : R
// Output : 3 (wrong)

#include<stdio.h>

int CharFrequency(char *str, char ch) // case insensitive
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ch) || (*str == ch + 32) || (*str == ch - 32))
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