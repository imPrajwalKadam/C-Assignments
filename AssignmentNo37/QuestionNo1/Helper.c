////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
//Paramiter     :  Integer
//Return Value  :  
//Description   :  it is a recursive program which display below pattern.                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  17th April 2021
//Output        :  * * * * 
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"

void Display()
{
    static int i=1;
    if(i<=4)
    {
        printf("*\t");
        i++;
        Display();
    }
}

