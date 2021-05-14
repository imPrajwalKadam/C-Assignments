#include"Header.h"
int main()
{
UINT iValue=0;
UINT iRet=0;

printf("Enter Number:\n");
scanf("%u",&iValue);

iRet=ToggleBit(iValue);

printf("Number of bytes is%d\n",iRet);
return 0;
}