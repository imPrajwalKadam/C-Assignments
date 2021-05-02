
#include"Header.h"
int main()
{
  int *arr=NULL;
  int iLength=0,i=0,iRet=0,iValue=0;
  BOOL bRet=FALSE;  
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);
  printf("Enter Number you Want to search");
  scanf("%d",&iValue);

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
  bRet=Check(arr,iLength,iValue);
if(bRet==TRUE)
{
  printf("Number is present");
}
else{
  printf("Number is    Present");
}
  free(arr);
  return 0;
}