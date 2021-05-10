#include"Header.h"
int main()
{
  char arr[20];
  char brr[20];
  printf("Enter String\n");
  scanf("%[^'\n']c",arr);
  StrCpyX(arr,brr);
  
  printf("After Modifyed String is:%s",brr);

return 0;
}