// TC - O(N+N/2)

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char Temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;
    while(start < end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;

        start++;
        end--;
    }

 
}

int main()
{
    char Arr[50] = {'\0'};
   

    printf("Enter String \n");
    scanf("%[^'\n]s",Arr);  
    
    strrevX(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}