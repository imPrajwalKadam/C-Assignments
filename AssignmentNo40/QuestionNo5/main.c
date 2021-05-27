

#include "Header.h"

int main()
{
    int iValue=0,iRet=0;
    printf("Enter Value:\n");
    scanf("%d",&iValue);
    iRet=Reverse(iValue);
    printf("Reverse is:%d\n",iRet);
    return 0;
}