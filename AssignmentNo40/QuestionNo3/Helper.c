////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :   Write a recursive program which accept string from user and count number of small characters. 
//Author        :  Prajwal Pradeep Kadam
//Date          :  23st May 2021
//Input         :  HElloWoRlD
//Output        :  5
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int CountSmallChar(char *ch)
{
    static int iCnt=1;
    if(*ch!='\0')
    {
        ch++;
     if((*ch>='A')&&(*ch<='Z'))
    {
        iCnt++;
    }
    CountSmallChar(ch);
  }
      return iCnt;
}

