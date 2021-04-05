//Write a program which accepts number from user and print 
//factor of that number.
//Input:24
//Output: 1 2 3 4 6 8 12
#include<stdio.h>
 void DisplayFactors(int iNo)
{                                                                             
  int i=0;
  if(iNo<=0)
  { 
    iNo=-iNo;
  }
  for(i=1;i<=iNo;i++)
  {  
    if(iNo%i==0) 
    {  
    printf("%d\n",i);
    
    }
  }
}   
int main()
{
  int iValue=0;
  printf("Enter Number:");
  scanf("%d",&iValue);
  DisplayFactors(iValue);
  return 0;
}  
