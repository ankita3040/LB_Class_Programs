#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
  

    printf("Enter String \n");
    scanf("%[^'\n]s",Arr);

    // problem solved
    printf("Enter the  charcter\n");
    scanf(" %c",&cValue); // space before %c 

    return 0;
}