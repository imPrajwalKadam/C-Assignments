////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :   Write a recursive program which accept string from user and count number of characters.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Input         :  Hello
//Output        :  5 
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int CountChar(char *ch)
{
    static int iCnt=1;
    if(*ch!='\0')
    {
        ch++;
     if(((*ch>='A')&&(*ch<='Z'))||((*ch>='a')&&(*ch<='z')))
    {
        iCnt++;
    }
    CountChar(ch);
  }
      return iCnt;
}

