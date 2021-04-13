#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  FactRev
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And return the difference between Summetion of all its Non-Factors.
//Input         :  12
//Output        :  -34(16-50)
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which Accept number from user and return difference between summetiom of all its non factors.
int FactDeff(int iNo)
{
    int iCnt=0,iSum1=0,iSum2=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
      if(iNo%iCnt==0)
      {
       iSum1=iSum1+iCnt;
      }
      else
      {
        iSum2=iSum2+iCnt;
      }
    }
    return iSum1-iSum2;
}
   