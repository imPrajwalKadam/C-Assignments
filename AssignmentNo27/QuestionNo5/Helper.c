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
Write a program which checks whether first and last bit is On or 
OFF. First bit means bit number 1 and last bit means bit number 32   */
BOOL ChkBit(UNIT iNo)
{

 unsigned int iResult=0;

  unsigned int iMask=0x80000001;
  iResult=iNo & iMask;

  if(iResult==iMask)
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }

}