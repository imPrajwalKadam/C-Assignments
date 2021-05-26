////////////////////////////////////////////////////////////////////////////////////
//Function Name :  SumDigitR
//Paramiter     :  Integer
//Return Value  :  None
//Description   :  Write a recursive program which display below pattern.       
//Author        :  Prajwal Pradeep Kadam
//Date          :  21st May 2021
//Input         :  579
//Output        :  24
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
/*int  SumDigit(int iNo)
{
    int iSum=0,iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iSum = iSum + iDigit;
        iNo=iNo/10;
    }
    return iSum;
}*/

int SumiDigitR(int iNo)
{
    int iDigit=0;
    static int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }    
    else if(iNo>0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo++;
        iNo=iNo/10;
        SumiDigitR(iNo);
    }
    return iSum;
}
