//Write a program which accept range from user and display all numbers in between that range. 

#include"Header.h"
 int main()
 {
 int iValue1 = 0; 
 int iValue2 = 0;
 int iRet=0;
 printf("Enter Starting Poiint:");
 scanf("%d",&iValue1);
 printf("Enter Ending point:");
 scanf("%d",&iValue2); 
 iRet=EvenRangeSum(iValue1,iValue2); 
 printf(" Even Addition is%d\n",iRet);
 return 0;
 }      