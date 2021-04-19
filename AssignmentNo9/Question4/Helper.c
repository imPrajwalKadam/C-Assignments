#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  EvenRangeSum
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which accept range from user and return addition of all even numbers in between that range.
//Input         :  23  30
//Output        :  108
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*.Write a program which accept range from user and return addition of all even 
numbers in between that range. (Range should contains positive numbers only) */ 
int EvenRangeSum(int iStart,int iEnd)
{
   
   int iCnt=1,iSum=0;
   if(iStart<0)
   {iStart=-iStart;}
   if(iEnd<0)
   {iEnd=-iEnd;}
   if(iStart>iEnd)
   {
   printf("\\\\\\Invalid Range\\\\\\n");
   return 0;
   }  
   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {
      if(iCnt%2==0)
      {
       iSum=iSum+iCnt;   
      }     
   }
   return iSum;
}