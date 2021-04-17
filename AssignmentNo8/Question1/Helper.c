#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  CountEvent
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which which accept number from user and print that number of $ & * on screen.
//Input         :  5 
//Output        :  $ * $ * $ * $ * $ *
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and print that number of $ & * on screen. 

void Pattern(int iNo) 
{
int iCnt=0;
if(iNo<0)
  {
   iNo=-iNo;
  }
for(iCnt=1;iCnt<=iNo;iCnt++)
  {
   printf("$ * ",iCnt);
  }
}
