

#include "Header.h"

int main()
{
    int iValue=0,iRet=0;
    printf("Enter Value:\n");
    scanf("%d",&iValue);
    iRet=MultR(iValue);
    printf("Product of digit is:%d\n",iRet);
    return 0;
}