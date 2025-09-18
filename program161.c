#include<stdio.h>

void Display(char str[])
{
    printf("%c\n",*str); // *(str +0)
    str++;
    printf("%c\n",*str); // *(str +1)
    str++;
    printf("%c\n",*str); // *(str +2)
    str++;
    printf("%c\n",*str); // *(str +3)
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    Display(Arr);

    return 0;
}
// str is moving