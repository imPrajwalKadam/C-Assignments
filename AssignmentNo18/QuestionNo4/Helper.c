#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :   Accept N numbers from user and return frequency of 11 form it.
//Input         :  N:7        Elements:85 66 3 15 11 88 11
// Output       :  2                                                                          
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return frequency of 11 form it.

int Frequency(int Arr[],int iSize)
{
  int i=0,iCnt=0;
  for(i=0;i<iSize;i++)
  {
    if(Arr[i]==11)
    {
      iCnt++;
    }
    
  }
  return iCnt;
}