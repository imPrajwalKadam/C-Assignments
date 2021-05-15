#include"Header.h"
int main()
{
UINT iValue=0,iRet=0,iPose=0;

printf("Enter Number:\n");
scanf("%u",&iValue);

printf("Enter Position:\n");
scanf("%d",&iPose);


iRet=ToggleBit(iValue,iPose);

printf("Number of bytes is%d\n",iRet);
return 0;
}