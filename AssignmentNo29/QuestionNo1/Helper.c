#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  ChkBit
//Paramiter     :  
//Return Value  :  
//Description   :  
//Input         :   
//Output        :                                                        
//Author        :  Prajwal Pradeep Kadam
//Date          :  31\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept one number and position from user and 
check whether bit at that position is on or off. If bit is one return TURE 
otherwise return FALSE  */
BOOL ChkBit (UNIT iNo,int iPose)
{
 unsigned int iMask=0X00000001;
 unsigned int iResult=0;
 if ((iPose<1) || (iPose>32))

{
  return FALSE;
}
iMask = iMask << (iPose-1);
  iResult = iNo & iMask;

  if (iResult==iMask)
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }

}