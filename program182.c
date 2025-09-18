#include<stdio.h>

void strlwuprX(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - ('a' - 'A');
            
        }
        else  if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
            
        }
        str++;
    }

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    strlwuprX(Arr);
    printf("Updated string %s\n",Arr);

    return 0;
}