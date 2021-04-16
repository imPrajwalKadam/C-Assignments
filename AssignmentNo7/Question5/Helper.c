#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name : CountDiff
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And return Difference between summetion of odd digits and summetion even digts.
//Input         :  2395
//Output        :  (-15)(2-17)
//Author        :  Prajwal Pradeep Kadam
//Date          :  08\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and return Difference between Summetion of Odd Digits and summetion of even digits.

int CountDiff(int iNo)
{
  int iDigit=1,iSum1=0,iSum2=0;
  if(iNo<0)
  {iNo=-iNo;}
  while(iNo>0)
  {
    iDigit=iNo%10;   
    if(iDigit%2==0)
     { 
      iSum1=iSum1+iDigit;
      iDigit++;
     }
    else {
      iSum2=iSum2+iDigit;
    }
    iNo=iNo/10;
  }
  return iSum1-iSum2;
}


