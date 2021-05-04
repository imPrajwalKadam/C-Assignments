#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  //  Accept Character from user and check whether it is capital or not (A-Z).
//Input         :  A        :     a
//Output        :  True     :     False                                                                
//Author        :  Prajwal Pradeep Kadam
//Date          :  23\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is capital or not (A-Z).
BOOL checkCap(char ch)
{
   if((ch>='A')&&(ch<='Z'))
   {
      return TRUE;
   }
   else{
     return   FALSE;
   }
}



