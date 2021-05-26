////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Mult
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Write a recursive program which accept number from user and return its product of digits.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  22st May 2021
//Input         :  523
//Output        :  30 
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int Mult(int iNo)
{
    int iMult=1,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }        
    while(iNo>0)
    {
        iDigit = iNo%10;
        iMult = iMult * iDigit;
        iNo = iNo/10;
    }
    return iMult;
}

int MultR(int iNo)
{
   static int iDigit=0,iMult=1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo>0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo++;
        iNo = iNo/10;
        MultR(iNo);
    }
    return iMult;
}