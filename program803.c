#include<stdio.h>


void Encrypt(char *str, int key)
{
    while (*str != '\0')
    {
        *str = *str + key;    
        str++;
    }
    

}

void Decrypt(char *str, int key)
{
    while (*str != '\0')
    {
        *str = *str - key;    
        str++;
    }
    

}
int main()
{
    char Arr[50] ={'\0'};
    printf("Enter String ");
    scanf("%[^'\n']s",Arr);

    
    Encrypt(Arr,5);

    printf("Encrypted data : %s \n",Arr);

    Decrypt(Arr,5);
    printf("Decrypted data : %s\n",Arr);
    return 0;

}