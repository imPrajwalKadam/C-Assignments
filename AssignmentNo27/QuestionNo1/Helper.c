#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  
//Paramiter     :  
//Return Value  :  
//Description   :  
//Input         :   
//Output        :                                                        
//Author        :  Prajwal Pradeep Kadam
//Date          :  31\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and copy the 
contents of that string into another string.   */
BOOL ChkBit(UNIT iNo)
{

 unsigned int iResult=0;

  unsigned int iMask=0x00004000;
  iResult=iNo & iMask;

  if(iResult==iMask)
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }

}