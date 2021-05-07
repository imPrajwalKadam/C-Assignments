
#include"Header.h"
int main()
{
  char arr[20];
  int iRet=0;

  printf("Enter Sring:");
  scanf("%[^'\n']s",arr);

 iRet= CountWhight(arr);

  printf("Whight spaces is:%d\n",iRet);
  
  return 0;

}