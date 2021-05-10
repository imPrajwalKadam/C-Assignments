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
Write a program which 2 strings from user and concat second string 
after first string. (Implement strcat() function)..  */
void StrcCatX(char *src,char *dest)
{
  if(src==NULL||dest==NULL)
  {return;}
  while(*dest!='\0')
  {
    dest++;
  }
  *dest=' ';
  dest++;
while(*src!='\0')
  {
    *dest=*src;
    src++;
    dest++;
  }
  *dest='\0';
}