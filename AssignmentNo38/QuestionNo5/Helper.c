////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Input         :  6
//Output        :  a b c d e f 
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void Display(int iNo)
{
    static int i=0;
    static char ch='a';
    if(i<iNo)
    {
        printf("%c\t",i+ch);
        i++;
        Display(iNo);
    }
}

