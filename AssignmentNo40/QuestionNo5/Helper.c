////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Mult
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Write a recursive program which accept number from user and return its reverse number. 
//Author        :  Prajwal Pradeep Kadam
//Date          :  24th May 2021
//Input         :  523
//Output        :  325
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int Reverse(int iNo)
{
    static int iReverse = 0;
    int iDigit = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = ((iReverse*10) + iDigit);
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iReverse;
}