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
Write a program which accept one number from user and check whether 
9th or 12th bit is on or off. 
   */
BOOL ChkBit(UINT iNo)
{

  UINT iResult=0;
  UINT iMask1=0x00000800;
  UINT iMask2=0x00000100;
  iResult=iNo & iMask1;
  iResult=iNo & iMask2;

  if((iResult==iMask1)||(iResult==iMask2))
  {
    return TRUE;
  }    
  else{
    return FALSE;
  }
}