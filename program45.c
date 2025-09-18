#include<stdio.h>


int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("Updated Digit is :%d\n",iDigit);

    iNo = iNo / 10;
    printf("Updated iNo :%d\n",iNo);
    
    iDigit = iNo % 10;
    printf("Updated Digit is %d\n",iDigit);

    iNo = iNo / 10;
    printf("Updated iNo :%d\n",iNo);

    iDigit = iNo % 10;
    printf("Updated Digit is %d\n",iDigit);

    iNo = iNo / 10;
    printf("Updated iNo :%d\n",iNo);



    return 0;
}