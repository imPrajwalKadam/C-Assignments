#include"Header.h"
int main()
{
 UINT iValue=0;
  BOOL bRet=0;

  printf("Enter Number\n");
  scanf("%u",&iValue);

    
  bRet= ChkBit(iValue);
   if(bRet==TRUE)
   {
      printf("Bit is On\n");
   }
   else{
     printf("Bit is Off\n");
   }

return 0;
}