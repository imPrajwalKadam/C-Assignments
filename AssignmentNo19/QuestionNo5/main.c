
#include"Header.h"
int main()
{
  int *arr=NULL;
  int i=0,iLength=0,iRet=0;
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);
  
 
  arr=(int*)malloc(iLength * sizeof(int));
  if(arr==NULL)
  {
    printf("unable to allocate Memory");
  }
  printf("Enter elements:\n");

  for(i=0;i<iLength;i++)
  {
    scanf("%d",&arr[i]);
  }
  iRet=Product(arr,iLength);
  printf("Product of Number is:%d",iRet);
 
  free(arr);
  return 0;
}