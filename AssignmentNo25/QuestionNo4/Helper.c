#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  LastChar
//Paramiter     :  Character
//Return Value  :  Character
//Description   :  chack character in string
//Input         :  Marvellous Multi OS     M  
//Output        :  11                                                      
//Author        :  Prajwal Pradeep Kadam
//Date          :  29\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
.Write a program which accept string from user and accept one 
character. Return index of last occurrence of that character   */
int LastChar(char *str,char ch)
{
    int iCnt=0;
    int iStart=0;
    if(str==NULL)   
    {return 0;}
    while(*str!='\0')
    {
          if(ch==*str)
          {      
            iStart=iCnt;
          }
          iCnt++;
          str++;
    }     
    return iStart;
}
