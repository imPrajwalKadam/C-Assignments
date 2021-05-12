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
Write a program which checks whether 7th & 15th & 21st , 28th bit 
is On or OFF.   */
BOOL ChkBit(UNIT iNo)
{

 unsigned int iResult=0;

  unsigned int iMask=0x08104040;
  iResult=iNo & iMask;

  if(iResult==iMask)
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }

}