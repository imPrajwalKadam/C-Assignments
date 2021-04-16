#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//Function Name : MultDigits
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And return multiplication of all digits
//Input         :  2395
//Output        :  270
//Author        :  Prajwal Pradeep Kadam
//Date          :  06\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and return Multiplication of all digits.
int MultDigits(int iNo)
{
  int iDigit=0,iMult=1;
  if(iNo<0)
  {iNo=-iNo;}
  while(iNo>0)
  {
    iDigit=iNo%10;

    iMult=iMult*iDigit;
    iNo=iNo/10;
  }
  return iMult;
}
