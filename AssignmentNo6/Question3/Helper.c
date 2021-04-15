
//#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////
//Function Name :  CountTwo
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And Count frequency of 2 in it
//Input         :  2395
//Output        :  1
//Author        :  Prajwal Pradeep Kadam
//Date          :  06\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and count frequency of 2 in it.
  
#include<stdio.h>
int CountTwo(int iNo)
{
    int iDigit=0,iCnt=0;
    if(iNo<0)
    {iNo=-iNo;}
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

