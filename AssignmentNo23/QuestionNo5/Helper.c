#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Reverse String
//Input         :  Atharva       
//Output        :  avrahtA                                                                     
//Author        :  Prajwal Pradeep Kadam
//Date          :  25\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and display it inn 
reverse order*/
void Reverse(char *str)
{
       int iCnt=0;
       if(str==NULL)
       {
              return ;
       }
       while(*str!='\0')
       {
              iCnt++;
              str++;
       }
        str--;
        while(iCnt>0)
        {
               printf("%c",*str);
               iCnt--;
               str--;
        }
       
}
