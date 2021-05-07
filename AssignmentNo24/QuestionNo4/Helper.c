#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Reverse String
//Input         :  Atharva       
//Output        :  avrahtA                                                                     
//Author        :  Prajwal Pradeep Kadam
//Date          :  25\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and display only 
digits from that string*/
void DisplayDigit(char *str)
{ 
      int iDigit=0;
      
      if(str==NULL)
      {
            return;
      }
      while(*str!='\0')
      {
            if((*str>='0') && (*str<='9'))
            {
                  printf("%c",*str);
            }    
            str++;
      }
}





