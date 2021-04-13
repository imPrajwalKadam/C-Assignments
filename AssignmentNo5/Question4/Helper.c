#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  FactRev
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And return th Summetion of all its Non-Factors.
//Input         :  12
//Output        :  5 7 8 9 10 11
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and return Summetion of its Non-Factors
int SumNonFact(int iNo)
{
    int iCnt=0,iSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      if(iNo%iCnt!=0)
      {
       iSum=iSum+iCnt;
      }    
    }
 return iSum;
    
}
   