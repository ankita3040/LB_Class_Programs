#include<stdio.h>


void Encrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str ^ 11;    // Cifan encryption algo
        str++;
    }
    

}

void Decrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str ^ 11;    // Cifan encryption algo
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

    Decrypt(Arr);
    printf("Decrypted data : %s\n",Arr);
    return 0;

}