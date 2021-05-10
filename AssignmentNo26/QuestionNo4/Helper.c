#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  LastChar
//Paramiter     :  Character
//Return Value  :  Character
//Description   :  chack character in string
//Input         :  abcd 
//Output        :  dcba                                                      
//Author        :  Prajwal Pradeep Kadam
//Date          :  29\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and copy small 
characters of that string into another string.  */
void StrCpyX(char *src,char *dest)
{
  if((src==NULL)||(dest==NULL))
  {return;}
  while(*src!='\0')
  {
    if((*src>='a')&&(*src<='z'))
    { 
      *dest=*src;
      *dest++;
    }
    src++;
  }
  *dest='\0';
}
