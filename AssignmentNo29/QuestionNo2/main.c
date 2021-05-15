#include"Header.h"
int main()
{
UINT iValue=0;
UINT iRet=0;
int iPose=0;
printf("Enter Number:\n");
scanf("%u",&iValue);
printf("Enter PositionL:\n");
scanf("%d",&iPose);


iRet=OffBit(iValue,iPose);

printf("Number of bytes is%d\n",iRet);
return 0;
}