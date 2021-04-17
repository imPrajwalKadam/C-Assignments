#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which accept number from user and print numbers till that number.
//Input         :  4 
//Output        :  -4 -3 -2 -1 0 1 2 3 4
//Author        :  Prajwal Pradeep Kadam
//Date          :  10\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accepts N from user and print all odd numbers up to N.
void OddDisplay(int iNo) 
{
int iCnt=0;
if(iNo<0)
{iNo=-iNo;}
for(iCnt=1;iCnt<=iNo/1;iCnt++)
 {
     if(iCnt%2!=0)
     {
     printf("%d ",iCnt);
 }
 }
}