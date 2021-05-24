////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Output        :  5 4 3 2 1
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void Display()
{
    static int i=5;
    if(i>=1)
    {
        printf("%d\t",i);
        i--;
        Display();
    }
}

