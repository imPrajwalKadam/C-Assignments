#include "Header.h"

int main()
{
    int iValue=0,iRet=0;
    printf("Enter Numbers:");
    scanf("%d",&iValue);
    iRet=MaxDigitR(iValue);
    printf("Maximum number is:%d",iRet);
    return 0;
}