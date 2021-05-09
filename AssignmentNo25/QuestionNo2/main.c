#include"Header.h"
int main()
{
  char arr[20];
  char cValue;
 int iRet=0;

  printf("Enter String:");
  scanf(" %[^'\n']s",arr);

  printf("Enter character:");
  scanf(" %c",&cValue);

  iRet=CountChar(arr,cValue);
  
  printf("Character Frequency is%d",iRet);

return 0;
}