#include<stdio.h>
#include<limit.h>

int main()
{
    int no = INT_MAX;

    printf("%d\n", no); // //2147483647
    no++;                   
    
    printf("%d\n", no); // //- 2147483648

    return 0;
}