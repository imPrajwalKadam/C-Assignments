#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which accept number from user and print numbers till that number.
//Input         :  5 
//Output        :  1 2 3 4 5
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//.Write a program which accept number from user and print numbers till that number. 
void Display(int iNo)
{
int iCnt=0;
if(iNo<0)
  {
   iNo=-iNo;
  }
for(iCnt=1;iCnt<=iNo;iCnt++)
  {
   printf("%d ",iCnt);
  }
}
