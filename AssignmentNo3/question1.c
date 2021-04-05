//write a program which accept one number from user and 
//print that number of even number on screen .
//Input:7
//Output:2,4,6,8,10,12,14

#include<stdio.h>
 void printEven(int iNo)
{
  int i=0,cnt=0;
  
  for(i=1;cnt!=iNo;i++)
  { 
    if(i%2==0)
    //if(i*2==0)
    {
    printf("%d\n",i);
    cnt++;
    }
  }
}
int main()
{
  int iValue=0;
  printf("Enter Number:");
  scanf("%d",&iValue);
  printEven(iValue);
  return 0;
}