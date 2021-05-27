////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Character
//Return Value  :  None
//Description   :  Write a recursive program which accept number from user and return smallest digit
//Author        :  Prajwal Pradeep Kadam
//Date          :  23rd May 2021
//Input         :  537
//Output        :  3
////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int MaxDigit(int iNo)
{
int iDigit=0,iMin=9;
if(iNo<0)
{iNo=-iNo;}
while(iNo>0)
{
iDigit=iNo%10;

if(iDigit<iMin)
{
    iMin=iDigit;
    if(iMin==0)
    {break;}
}
iNo=iNo/10;   
} 
 return iMin;  
}
//////////////////////////////////////////////////////////////////////////////////////////
int MaxDigitR(int iNo)
{
    int iDigit=0;
    static int iMin=10;
    if(iNo<0)
    {
        iNo= -iNo;
    }
     if(iNo > 0)
    {
        iDigit = iNo % 10;
         if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        iNo=iNo/10;
        MaxDigitR(iNo);
    }
    return iMin;
}