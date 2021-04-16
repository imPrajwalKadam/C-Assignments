//Write a program which accept number from user and return the count of even digits.
#include"Header.h"
 int main()
 {
     int iValue=0;
     int iRet=0;

     printf("Enter number:");
     scanf("%d",&iValue);

     iRet=MultDigits(iValue);
     printf("%d",iRet);
     return 0 ;
 }