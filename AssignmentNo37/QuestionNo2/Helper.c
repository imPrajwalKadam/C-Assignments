////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Output        :  1 2 3 4 5
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void Display()
{
    static int i=1;
    if(i<=5)
    {
        printf("%d\t",i);
        i++;
        Display();
    }
}

