#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  Accept N numbers from user and display all such elements which are multiples of 11. 
//Input         :  N:6        Elements:85 66 3 55 93 88
// Output       :  3                                                                           
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such elements which are multiples of 11. 
int Display(int Arr[],int iSize)
{
  int iCnt=0,i=0;
  
  for(i=0;i<iSize;i++)
  {
       if((Arr[i]%2)==0)
    {
     iCnt++;
    }
  }
  return iCnt;
}
