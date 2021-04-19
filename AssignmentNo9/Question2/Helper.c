#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  MultipleDisplay
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which acceptrange from user and display all Even numbers in between that range. 
//Input         :  10  18
//Output        :  10 12 14 16 18 
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept range from user and display all Even numbers in between that range. 
void RangeDisplayEven(int iStart,int iEnd)
{
   if(iStart<0)
   {iStart=-iStart;}
   if(iEnd<0)
   {iEnd=-iEnd;}
   int iCnt=0;
   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
      if((iCnt%2)==0)
      {
         printf("%d\t",iCnt);   
      }
   }
}