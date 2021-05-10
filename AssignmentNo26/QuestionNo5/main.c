#include"Header.h"
int main()
{
  char arr[20];
  char brr[20];
  int iRet=0;

  printf("Enter String\n");
 
  scanf("%[^'\n']c",arr);
  printf("Enter Second String\n");
  scanf(" %[^'\n']c",brr);
  
  StrcCatX(arr,brr);
  printf("After copying String is:%s\n",brr);
  return 0;
}
