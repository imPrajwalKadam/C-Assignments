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
. Write a program which accept string from user reverse that string 
in place.   */
void strRevX(char str[])
{
  char *cStart,*cEnd;
  char temp;
  if(str==NULL)
  {
    return;
  }
  cStart=str;
  cEnd=str;

  while(*cEnd!='\0')
  {
    cEnd++;
  }
cEnd--;
while(cStart<cEnd)
{
  temp=*cStart;
  *cStart=*cEnd;
   *cEnd=temp;
    cStart++;
    cEnd--;
}
    
}
