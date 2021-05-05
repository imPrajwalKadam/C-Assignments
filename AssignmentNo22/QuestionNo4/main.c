
#include"Header.h"
int main()
{
  char cValue='\0';
  BOOL bRet=FALSE;

  printf("Enter the charater");
  scanf("%c",&cValue);

  bRet=ChkSpecial(cValue);

  if(bRet==TRUE)
  {
    printf("It is Special character..");
  }
  else{
    printf("It is not Special charater..");
  }
  return 0;
}