#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Display Small character
//Input         :  Atharva       
//Output        :  6                                                                   
//Author        :  Prajwal Pradeep Kadam
//Date          :  24\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and check whether 
it contains vowels in it or not. */
BOOL ChkVovel(char *str)
{
       int iCnt=0;
       if(str==NULL)
       {
              return 0;
       }
       while(*str!='\0')
       {
              if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
              {
                return TRUE;
              }
              else{
                     return FALSE;
              }
              str++;
       }
}
