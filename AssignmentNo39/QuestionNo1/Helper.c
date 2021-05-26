////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
//Paramiter     :  Integer
//Return Value  :  
//Description   :  it is a recursive program which display below pattern.                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  17th April 2021
//Input         :  5
//Output        :  5 * 4 * 3 * 2 * 1 *
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"

void Display( int iNo)
{
     if(1<=iNo)
    {
    printf("%d\t*\t",iNo);
    iNo--;
    
    Display(iNo);
    }
}