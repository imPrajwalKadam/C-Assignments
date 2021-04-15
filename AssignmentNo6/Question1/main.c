////write a program which accept number from user and display its Digits in reverse order
#include"Header.h"
 int main()
{    
    int iValue=0;    
    printf("Enter number:");
    scanf("%d",&iValue);
    DisplayDigits(iValue);

       return 0;
}