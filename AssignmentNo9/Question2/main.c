//Write a program which accept range from user and display all numbers in between that range. 

#include"Header.h"
 int main()
 {
 int iValue1 = 0; 
 int iValue2 = 0;
 printf("Enter Starting Poiint:");
 scanf("%d",&iValue1);
 printf("Enter Ending point:");
 scanf("%d",&iValue2); 
 RangeDisplayEven(iValue1,iValue2); 
 return 0;
 }      