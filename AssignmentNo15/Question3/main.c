//Write a program which accept range from user and display all numbers in between that range. 

#include"Header.h"
 int main() 
{ 
 int iValue1 = 0;
 int iValue2 = 0; 
 printf("Enter number of Rows"); 
 scanf("%d",&iValue1);
 printf("Enter Number of Columns");
 scanf("%d",&iValue2); 
 Pattern(iValue1,iValue2); 
 return 0; 
} 