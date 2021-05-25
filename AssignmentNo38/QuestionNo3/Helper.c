////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Input         :  5
//Output        :  5 4 3 2 1
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
void Display(int iNo)
{
    if(1<=iNo)
    {
        printf("%d\t",iNo);
        iNo--;
        Display(iNo);
    }
}

