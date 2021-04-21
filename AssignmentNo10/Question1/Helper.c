#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
//Input         :  5
//Output        :  A B C D E 
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//. Accept number from user and display below pattern.
void Pattern(int iNo)
{
   int iCnt=0;
   char ch='A';
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf(" %c\t%d\n",ch,iCnt);
      
      ch++;

   }
}
