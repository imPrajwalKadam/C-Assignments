

#include "Header.h"

int main()
{
    int iValue=0,iRet=0;
    printf("Enter Value:");
    scanf("%d",&iValue);
    iRet=MaxDigitR(iValue);
    printf("Minimum Number  is:%d",iRet);
    return 0;
}