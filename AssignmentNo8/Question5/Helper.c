#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  MultipleDisplay
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which acceptrange from user and display all numbers in between that range. 
//Input         :  10  18
//Output        :  10 11 12 13 14 15 16 17 18
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept range from user and display all numbers in between that range. 
void RangeDisplay(int iStart,int iEnd)
{
   if(iStart<0)
   {
      iStart=-iStart;
   }
   if(iEnd<0)
   {iEnd=-iEnd;}
   int iCnt=1;
   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
   printf("%d\t",iCnt);   
  }
}