#include"Header.h"
int main()
{
UINT iValue=0,iRet=0;

printf("Enter Number:\n");
scanf("%u",&iValue);



iRet=CountBit(iValue);

printf("Totsl On Bits are:%d\n",iRet);
return 0;
}