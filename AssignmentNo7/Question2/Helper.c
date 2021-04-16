#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  CountOdd
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And display count of odd digits
//Input         :  2395
//Output        :  3
//Author        :  Prajwal Pradeep Kadam
//Date          :  06\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and return the count of Odd digits.
int CountOdd(int iNo)
{
  int iCnt=0;
  if(iNo<0)
  {iNo=-iNo;}
  while(iNo>0)
  {
    if(((iNo%10)%2)!=0)
    {iCnt++;}
    iNo=iNo/10;
  }
  return iCnt;
}
