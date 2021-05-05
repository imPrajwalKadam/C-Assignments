#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Display Small character
//Input         :  A      
//Output        :  a                                                                     
//Author        :  Prajwal Pradeep Kadam
//Date          :  23\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*Accept character from user. If character is small display its 
corresponding capital character, and if it small then display its 
corresponding capital. In other cases display as it is. */

void Display(char ch)
{
   
      if((ch>='A')&&(ch<='Z'))
      {
         ch=ch+32;
      }
      printf("%c\n",ch);
   
}