////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Character
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Input         :  6
//Output        :  A B C D E F
////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void DisplayR(int iNo)
{
    static int i=0;
   
    static char ch='A';
    if(iNo>i)
    {
        printf("%c\t",ch+i);
        i++;

        DisplayR(iNo);
    }
}

