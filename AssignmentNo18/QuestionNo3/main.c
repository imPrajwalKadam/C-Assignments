
#include"Header.h"
int main()
{
  int *arr=NULL;
  int iLength=0,i=0,iRet=0;
  BOOL bRet=FALSE;  
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);

  arr=(int*)malloc(iLength * sizeof(int));
  if (arr==NULL)
  {
    printf("Unable to Allocate Memory\n");
    return -1;
  }else{
  printf("Enter elements:\n");
  }
  for(i=0;i<iLength;i++)
  {
    scanf("%d",&arr[i]);
  }
  bRet=Check(arr,iLength);
if(bRet==FALSE)
{
  printf("11 is present");
}
else{
  printf("11 is Not Present");
}
  free(arr);
  return 0;
}