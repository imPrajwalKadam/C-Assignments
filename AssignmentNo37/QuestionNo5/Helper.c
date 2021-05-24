////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Output        :  A B C D E F
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void Display()
{
    static char ch='a';
    if(ch<='f')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

