
#include"Header.h"
int main()
{
  char arr[20];
  BOOL bRet=FALSE;

  printf("Enter String:\t");
  scanf("%[^'\n']s",arr);

  bRet=ChkVovel(arr);
  if(bRet==TRUE)
  {
    printf("Contains Vovel");
  }
  else{
    printf("It not contains Vovel");
  }
  return 0;


}