#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  DisplayDigits
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And display its Digit in reverse order
//Input         :  2395
//Output        :  5 9 3 2
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//write a program which accept number from user and display its Digits in reverse order
void DisplayDigits(int iNo)
{
  int iDigit=0;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  while(iNo>0)
  {
    iDigit=iNo%10;
    printf("%d",iDigit);
    iNo=iNo/10;
  }
}