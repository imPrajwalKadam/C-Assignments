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
Write a program which checks whether 7th & 8th & 9th bit is On or 
OFF.   */
BOOL ChkBit(UNIT iNo)
{

 unsigned int iResult=0;

  unsigned int iMask=0x000001C0;
  iResult=iNo & iMask;

  if(iResult==iMask)
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }

}