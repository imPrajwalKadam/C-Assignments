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
Write a program which accept one number from user and toggle 7th and 
10th bit of that number. Return modified number.  */

UINT ToggleBit(UINT iNo) 
{
  unsigned int iMask = 0x00000240;
  unsigned int iResult = 0; 
  iResult= iNo ^ iMask;

  return iResult;
}