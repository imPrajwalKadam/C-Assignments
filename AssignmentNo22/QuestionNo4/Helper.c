#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Display Small character
//Input   `     :  Q       @  
//Output        :  FALSE    TRUE                                                                 
//Author        :  Prajwal Pradeep Kadam
//Date          :  24\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *)..*/

BOOL ChkSpecial(char ch)
{
       char i = 0;
       if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
       {
              return FALSE;
                           
       }
       else
       {
              return TRUE;
       }
}