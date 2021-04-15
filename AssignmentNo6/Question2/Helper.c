
#include"Header.h"
#define TRUE 1
#define FALSE 0
typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  DisplayDigits
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And Check whether it contains 0 or not.
//Input         :  2395
//Output        :  5 9 3 2
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and check whether it contains 0 in it or Not
BOOL ChkZero(int iNo)
{
  int iDigit=0,iCnt=0;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  while(iNo>0)
  {
    iDigit=iNo%9;
    if(iDigit==iNo)
    {iCnt++;}
    iNo=iNo/9;
  }
  return iDigit;
}
