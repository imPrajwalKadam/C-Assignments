////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
//Paramiter     :  Integer
//Return Value  :  
//Description   :  it is a recursive program which display below pattern.                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  17th April 2021
//Input         :  5
//Output        :  * * * * *
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"

void Display( int iNo)
{
    if(1<=iNo)
    {
    printf("*\t");
    iNo--;
    Display(iNo);
    }
}