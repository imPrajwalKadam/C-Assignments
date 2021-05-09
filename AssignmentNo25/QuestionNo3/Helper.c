#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  FirstChar
//Paramiter     :  Character
//Return Value  :  Character
//Description   :  chack character in string
//Input         :  Marvellous Multi OS     e  
//Output        :  4                                                      
//Author        :  Prajwal Pradeep Kadam
//Date          :  25\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and accept one 
character. Return Position of that character   */
int FirstChar(char *str,char ch)
{
    int iCnt=0;
    if(str==NULL)   
    {return 0;}
    while(*str!='\0')
    {
          if(ch==*str)
          {      
               break;
          }
          iCnt++;
          str++;
    }     
    return iCnt;
}
