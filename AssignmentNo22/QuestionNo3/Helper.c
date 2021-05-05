#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Display Small character
//Input   `      :  Q      
//Output        :  Q R S T U V W X Y Z                                                                     
//Author        :  Prajwal Pradeep Kadam
//Date          :  24\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*Accept character from user. If it is capital then display all the 
characters from the input characters till Z. If input character is small 
then print all the characters in reverse order till a. In other cases 
return directly. */

void Display(char ch)
{
       char i = 0;
       if(ch>='A' && ch<='Z')
       {
              for(i=ch;i<='Z';i++)
              {
                     printf("%c\t",i);
              }
              printf("\n");              
       }
       else if(ch>='a' && ch<='z')
       {
              for(i=ch;i>='a';i--)
              {
                     printf("%c\t",i);
              }
              printf("\n");
       }
       else
       {
              return;
       }
}