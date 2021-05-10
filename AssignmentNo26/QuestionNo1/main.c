#include"Header.h"
int main()
{
  char arr[20];
  char brr[20];
  printf("Enter String\n");
  scanf("%[^'\n']c",arr);
  StrCpyX(arr,brr);
  
  printf("After copys the String is:%s",brr);

return 0;
}