////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Character
//Return Value  :  None
//Description   :  Write a recursive program which accept number from user and return its factorial.    
//Author        :  Prajwal Pradeep Kadam
//Date          :  22st May 2021
//Input         :  5
//Output        :  120
////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"
int Fact(int iNo)
{
     int iCnt = 0,iMult = 1;
     if(iNo<0)
     {
          iNo=-iNo;
     }
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
          iMult = iMult * iCnt;
     }
     return iMult;
}
int FactR(int iNo)
{
     static int iCnt=1;
     static int iMult=1;
     if(iCnt!=iNo)
     {
          iCnt++;
          iMult = iMult * iCnt;
          FactR(iNo);
     }
     return iMult;
}