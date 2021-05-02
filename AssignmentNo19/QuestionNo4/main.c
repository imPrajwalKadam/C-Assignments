
#include"Header.h"
int main()
{
  int *arr=NULL;
  int i=0,iLength=0,iValue1=0,iValue2=0;
  printf("Enter The Number of elements:\n");
  scanf("%d",&iLength);
  printf("Enter the numbers of Starting point\n");
  scanf("%d",&iValue1);
  printf("Enter the number of ending point\n");
  scanf("%d",&iValue2);
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
  Range(arr,iLength,iValue1,iValue2);
  
 
  free(arr);
  return 0;
}