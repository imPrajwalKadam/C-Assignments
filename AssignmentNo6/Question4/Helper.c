
#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////
//Function Name :  CountFour
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And Count frequency of 2 in it
//Input         :  2395
//Output        :  1
//Author        :  Prajwal Pradeep Kadam
//Date          :  06\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and count frequency of 4 in it.
  
int CountFour(int iNo)
{
    int iDigit=0,iCnt=0;
    if(iNo<0)
    {iNo=-iNo;}
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

