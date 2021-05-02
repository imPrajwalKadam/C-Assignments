
#include"Header.h"
int main()
{
  int *arr=NULL;
  int iLength=0,i=0,iRet=0,iValue=0;
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);
  printf("Enter the numbers\n");
  scanf("%d",&iValue);

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
  iRet=Frequency(arr,iLength,iValue);
  
 if(iRet==-1)
 {
   printf("Their is No such number\n");
 }else{
    printf("First occurrence of number is %d",iRet);
 }
  free(arr);
  return 0;
}