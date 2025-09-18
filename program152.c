
#include<stdio.h>


int main()
{
    char Arr[50];

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr); // ^ ->NOT //%[^'\n']s Regular expression//  

    printf("Your name is %s\n",Arr);

    return 0;
}