#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   : Accept Character from user and check whether it is Small or not (A-Z).
//Input         :  g        :     G
//Output        :  True     :     False                                                                
//Author        :  Prajwal Pradeep Kadam
//Date          :  23\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//  Accept Character from user and check whether it is Small or not (A-Z).
BOOL checkSmall(char ch)
{    
   if((ch>='a')&&(ch<='z'))
   {
      return TRUE;
   }
   else if((ch>='A')&&(ch<='Z'))
      {
     return   FALSE;
   }
}

