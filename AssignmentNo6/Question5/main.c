//Write a program which accept number from user and count frequency of each a Digits which are less then 6.
#include"Header.h"
 int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=CountFour(iValue);
    printf("%d",iRet);
    return 0;
}
    