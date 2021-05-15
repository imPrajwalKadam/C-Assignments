#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  
//Paramiter     :  
//Return Value  :  
//Description   :  
//Input         :   
//Output        :                                                        
//Author        :  Prajwal Pradeep Kadam
//Date          :  4\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits) .*/

UINT ToggleBit(UINT iNo) 
{
   UINT  iMask = 0XF000000F;
   UINT Result = 0;

   

 
   
   Result = iNo ^ iMask;

   return Result;
}