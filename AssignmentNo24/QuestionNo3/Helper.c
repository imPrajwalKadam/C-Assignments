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
Write a program which accept string from user and convert it into 
upper case*/
void strtogglex(char *str)
{
       if(str==NULL)
       {return ;}
       while(*str!='\0')
       {     
       if((*str>='a')&&(*str<='z'))
       {
       *str=*str-32;
      }
      else if((*str>='A')&&(*str<='Z'))
      {
            *str=*str+32;
      }
      str++;
}
}




