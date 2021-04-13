//Write a program which accept number from user and return Summetion of its Non-Factors
#include"Header.h"
 int main()
{    
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=SumNonFact(iValue);
    printf("%d",iRet);
       return 0;
}