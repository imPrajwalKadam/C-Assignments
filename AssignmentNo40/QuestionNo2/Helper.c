////////////////////////////////////////////////////////////////////////////////////
//Function Name :  SumDigitR
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which accept number from user and return largest digit       
//Author        :  Prajwal Pradeep Kadam
//Date          :  22nd May 2021
//Input         :  87983
//Output        :  9
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int MaxDigit(int iNo)
{
int iDigit=0,iChek=0;
if(iNo<0)
{iNo=-iNo;}

while(iNo>0)
{
iDigit=iNo%10;

if(iDigit>iChek)
{
    iChek=iDigit;
}
iNo=iNo/10;   
} 
 return iChek;  
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
int MaxDigitR(int iNo)
{
    int iDigit=0;
    static int iCheck=0;
    if(iNo<0)
    {
        iNo= -iNo;
    }
     if(iNo > 0)
    {
        iDigit = iNo % 10;
         if(iDigit>iCheck)
        {
            iCheck = iDigit;
        }
         iNo=iNo/10;
        MaxDigitR(iNo);
    }
    return iCheck;
}