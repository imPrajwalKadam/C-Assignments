
#include"Header.h"
int main()
{
      int *arr=NULL;
      int iSize=0,i=0;
      printf("Enter Number of Elements\n");
      scanf("%d",&iSize);
      arr=(int*)malloc(iSize*sizeof(int));
      if(arr==NULL)
      {
        printf("Unable allocate the memory\n");
        return -1;
      }
      for(i=0;i<iSize;i++)
      {
        printf("Enter the Element :");
        scanf("%d",&arr[i]);
      }
      Digits(arr,iSize);
      free(arr);
      return 0;
}