#include<stdio.h>
/////////////////////////////////////////////////////////
//Function Name :  MultFact
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And Display its multiplication of Factors
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
/////////////////////////////////////////////////////////
/*Write Program which accept number from user and display its multiplication of
Factors*/
//Input:12
//Output:144(1*2*3*6) 
int Multfact(int iNo)
{
    int iCnt=0,iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt!=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
         {
         printf("%d\n",iCnt);
         iMult=iMult*iCnt;
         }
    }
    return iMult;
}
