#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
//Input         :  4
//Output        :  # 1 * # 2 * # 3 * # 4 * 
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//.. Accept number from user and display below pattern. 
void Pattern(int iNo)
{
   int iCnt=1;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf("\t#\t%d\t*",iCnt);

   }
}
