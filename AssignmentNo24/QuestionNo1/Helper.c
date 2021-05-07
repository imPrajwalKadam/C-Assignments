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
Write a program which accept string from user and display it in
reverse order*/
void strlwrx(char *str)
{
       if(str==NULL)
       {return ;}
       while(*str!='\0')
       {     
       if((*str>='A')&&(*str<='Z'))
       {
       *str=*str+32;
      }
      str++;
}
}




