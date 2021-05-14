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
Write a program which accept one number from user and off 7th and 10th 
bit of that number. Return modified number.   */

UINT OffBit(UINT iNo) 
{
  unsigned int  iMask=0xFFFFFDBF;
  unsigned int Result=0;  
  Result=iNo&iMask;
  return Result;
}