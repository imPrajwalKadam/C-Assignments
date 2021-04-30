#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  Accept N numbers from user and return difference between frequency of even number and odd numbers. 
//Input         :  N:7        Elements:85 66 3 80 93 88 90
// Output       :  1(4-3)                                                                          
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return difference between frequency of even number and odd numbers. 

int Frequency(int Arr[],int iSize)
{
  int iCnt1=0,i=0,iCnt2=0;
  
  for(i=0;i<iSize;i++)
  {  
       if((Arr[i]%2)==0)
  {
     iCnt1++;
    }
    else if((Arr[i]%2)!=0)
    {
      iCnt2++;
    }
  }
  return iCnt1-iCnt2;
}
