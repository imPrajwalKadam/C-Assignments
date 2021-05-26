

#include "Header.h"

int main()
{
    int iValue=0,iRet=0;
    printf("Enter Value:");
    scanf("%d",&iValue);
    iRet=FactR(iValue);
    printf("Factorial of number is:%d",iRet);
    return 0;
}