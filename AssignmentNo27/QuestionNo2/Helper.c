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
Write a program which checks whether 5th & 18th bit is On or OFF.
   */
BOOL ChkBit(UNIT iNo)
{

 unsigned int iResult=0;

  unsigned int iMask=0x00020010;
  iResult=iNo & iMask;

  if(iResult==iMask)
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }

}