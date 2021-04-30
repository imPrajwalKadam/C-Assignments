
#include"Header.h"
int main()
{
  int *arr=NULL;
  int iLength=0,i=0,iRet=0;
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);

  arr=(int*)malloc(iLength * sizeof(int));
  printf("Enter elements:\n");

  for(i=0;i<iLength;i++)
  {
    scanf("%d",&arr[i]);
  }
  iRet=Frequency(arr,iLength);
  
  if(iRet==11)
 {
    printf("Frequency of Even number is:%d\n",iRet);
 }
 else{
   printf("Thair is no 11 in Elements..");
 }
  free(arr);
  return 0;
}