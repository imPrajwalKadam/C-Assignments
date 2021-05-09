#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  ChkChar
//Paramiter     :  character
//Return Value  :  BOOLEAN
//Description   :  chack character in string
//Input         :      atharva  e    atharva   a    
//Output        :  FALSE               TRUE                                                      
//Author        :  Prajwal Pradeep Kadam
//Date          :  25\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not.*/
BOOL ChkChar(char *str,char ch)
{
      while(*str!='\0')
      {
            if(*str==ch)
            {
                  break;
            }
            str++;      
      } 
      if(*str=='\0')
      {
            return FALSE;
      }
      else
      {
            return TRUE;
      }
}