#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which accept number from user and print numbers till that number.
//Input         :  4 
//Output        :  -4 -3 -2 -1 0 1 2 3 4
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and print its numbers line.
void Display(int iNo)
{
int iCnt=0;
for(iCnt=-iNo;iCnt<=iNo;iCnt++)
 {
  printf("%d ",iCnt);
 }
}