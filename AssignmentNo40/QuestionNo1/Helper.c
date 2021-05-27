////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
//Paramiter     :  Integer
//Return Value  :  
//Description   :   Write a recursive program which accept string from user and count white spaces.                           
//Author        :  Prajwal Pradeep Kadam
//Date          :  22nd May 2021
//Input         :  He Ll O
//Output        :  3
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int WhiteSpace(char *ch)
{
    static int iCnt=0;
    if(*ch!='\0')
    {
        ch++;
        if(*ch==' ')
        {
            iCnt++;
        }
        WhiteSpace(ch);
    }
    return iCnt;
}