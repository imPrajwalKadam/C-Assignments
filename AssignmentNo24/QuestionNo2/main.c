
#include"Header.h"
int main()
{
  char arr[20];
  int iRet=0;

  printf("Enter Sring:");
  scanf("%[^'\n']s",arr);

  struprx(arr);

  printf("Modified String is:%s",arr);
  
  return 0;

}