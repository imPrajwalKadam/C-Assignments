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
Write a program which accept string from user and return difference between 
frequency of small characters and frequency of capital characters*/
int CountSmall(char *str)
{
       int iCnt1=0;
       int iCnt2=0;
       if(str==NULL)
       {
              return 0;
       }
       while(*str!='\0')
       {
              if((*str>='a')&&(*str<='z'))
              {
              iCnt1++;
              }
              if((*str>='A')&&(*str<='Z'))
              {
                     iCnt2++;
              }
        str++;
       }
             return iCnt1-iCnt2;
}
