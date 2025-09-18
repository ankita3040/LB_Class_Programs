#include<stdio.h>

int main()
{
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Number in decimal format : %d\n",iValue);
    printf("Number in octal format : %o\n",iValue);
    printf("Number in hexadecimal format : %0X\n",iValue);

    return 0;
}