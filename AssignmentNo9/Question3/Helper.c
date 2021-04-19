#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  RangeSum
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which acceptrange from user and display all numbers in between that range. 
//Input         :  10  18
//Output        :  126
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*Write a program which accept range from user and return addition of all numbers 
in between that range. (Range should contains positive numbers only)*/ 
int RangeSum(int iStart,int iEnd)
{
   int iCnt=1,iSum=0;
  
   if(iStart>iEnd)
   {
   printf("Invalid Range");
   return 0;
   }
   for(iCnt=iStart;iCnt<=iEnd;iCnt++)
   {  
  
      iSum=iSum+iCnt;   
            
   }
   return iSum;
}