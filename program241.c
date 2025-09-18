#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> 
#include<string.h>
    
int main()
{
    
    write(1,"Jay Ganesh...",13); // 1- stdout(monitor) printf intenally calls write
    return 0;
}