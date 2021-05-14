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

UINT OffBit(UINT iNo) 
{
  unsigned int  iMask=0xFFFFFFBF;
  unsigned int Result=0;  
  Result=iNo&iMask;
  return Result;
}