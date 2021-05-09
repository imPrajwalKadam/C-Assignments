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
character. Return frequency of that character.*/
int CountChar(char *str,char ch)
{
      if(str==NULL)
      {
            return 0;
      }
      int iCnt=0;
      while(*str!='\0')
      {
           if(ch==*str)
           {
             iCnt++;
           } 
           str++;
      }
     
 return iCnt;     
}
      