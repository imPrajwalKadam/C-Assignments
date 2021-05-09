#include"Header.h"
int main()
{
  char arr[20];
  char cValue;
  BOOL bRet=FALSE;

  printf("Enter String:");
  scanf(" %[^'\n']s",arr);

  printf("Enter character:");
  scanf(" %c",&cValue);

  bRet=ChkChar(arr,cValue);
  if(bRet==TRUE)
  {
    printf("character found");
  }
  else{
    printf("Character not found");
  }
return 0;
}