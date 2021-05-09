#include"Header.h"
int main()
{
  char arr[20];

  printf("Enter String:");
  scanf(" %[^'\n']s",arr);

  strRevX(arr);
  
  printf("Modified String is:%s\n",arr);

return 0;
}