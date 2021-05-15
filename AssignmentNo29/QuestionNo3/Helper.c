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
Write a program which accept one number and position from user and off 
that bit. Return modified number.*/

UINT OnBit(UINT iNo,int iPose) 
{
   UINT  iMask = 0X00000001;
   UINT Result = 0;

   if ((iPose<1) || (iPose>32)) 
   {return false;}

   iMask = iMask << (iPose-1);
   
   Result = iNo | iMask;

   return Result;
}