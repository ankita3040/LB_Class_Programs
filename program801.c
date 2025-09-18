#include<stdio.h>


void Encrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str + 1;    // Cifan encryption algo
        str++;
    }
    

}
int main()
{
    char Arr[50] ={'\0'};
    printf("Enter String ");
    scanf("%[^'\n']s",Arr);

    Encrypt(Arr);

    printf("Encrypted data : %s \n",Arr);
    return 0;

}