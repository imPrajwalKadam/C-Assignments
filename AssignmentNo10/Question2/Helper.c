#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
//Input         :  5
//Output        :  5 # 4 # 3 # 2 # 1 #
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//.. Accept number from user and display below pattern. 
void Pattern(int iNo)
{
   int iCnt=1;

   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
      printf("\t%d\t#",iCnt);

   }
}
