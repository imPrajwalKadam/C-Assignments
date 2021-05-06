
#include"Header.h"
int main()
{
  char arr[20];
  int iRet=0;

  printf("Enter Sring:");
  scanf("%[^'\n']s",arr);

  iRet=CountCapital(arr);

  printf("%d",iRet);

  return 0;

}