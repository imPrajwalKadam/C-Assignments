#include"Header.h"
int main()
{
UINT iValue1=0,iValue2=0,iRet1=0,iRet2=0;

printf("Enter First Number:\n");
scanf("%u",&iValue1);
printf("Enter Second Number:\n");
scanf("%u",&iValue2);


iRet1=CountBit(iValue2,iValue1);
printf("1st Total On Bits are:%d\n",iRet1);
iRet2=CountBit(iValue1,iValue2);
printf("2nd Total on Bits are:%d\n",iRet2);

return 0;
}