#include"Header.h"
int main()
{
  unsigned int iValue=0,iPose=0;
  BOOL bRet=0;

  printf("Enter Number\n");
  scanf("%u",&iValue);

  printf("Enter position\n");
  scanf("%d",&iPose);

    
  bRet= ChkBit(iValue,iPose);
   if(bRet==TRUE)
   {
      printf("Bit is On\n");
   }
   else{
     printf("Bit is Off\n");
   }

return 0;
}