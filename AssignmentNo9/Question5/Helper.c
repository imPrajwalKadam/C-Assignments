#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  RangeDisplayRev
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which accept range from user and return addition of all even numbers in between that range.
//Input         :  23  35
//Output        :  35 34 33 32 31 30 29 28 27 26 25 24 23 
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*.Write a program which accept accept range from user and display all numbers in 
between that range in reverse order.  */ 
void RangeDisplayRev(int iStart,int iEnd)
{
   
      int iCnt=0;
      if(iStart>iEnd)
   {
    printf("Invalid Range");
   }  
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
   {
     printf("%d\t",iCnt);
   }
}