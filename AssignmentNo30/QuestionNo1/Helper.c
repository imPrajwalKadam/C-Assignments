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

UINT CountBit(UINT iNo) 
{
   UINT  iMask = 0X00000001;
   UINT Result = 0;
   int i=0,iCnt=0;
   for(i=0;i<32;i++)
   {
   Result = iNo & iMask;
   if(Result==iMask)
   {
      iCnt++;
   }
   iMask=iMask<<1;
   }
   return iCnt;
}