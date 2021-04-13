#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  FactRev
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And Display  NonFactors of that number.
//Input         :  12
//Output        :  5 7 8 9 10 11
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
//////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo) 
{
  int iCnt=0;
  for(iCnt=1;iCnt!=iNo;iCnt++)
  {
   if(iNo%iCnt!=0)
   {
     printf("%d\n",iCnt);
   }
  }
}
   