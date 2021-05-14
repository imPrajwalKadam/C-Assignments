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
Write a program which accept one number from user and on its first 4 
bits. Return modified number. */

UINT OnBit(UINT iNo) 
{
  unsigned int  iMask=0x0000000f;
  unsigned int Result=0;  
  Result=iNo|iMask;
  return Result;
}