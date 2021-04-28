#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Accept N numbers from user and return difference between summation of even elements and summation of odd elements. 
//Input         :  N:6    Elements:85 66 3 80 93 88
// Output       :  53                                                                             
//Author        :  Prajwal Pradeep Kadam
//Date          :  16\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return difference between summation of even elements and summation of odd elements. 
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iSize)
{
  int i=0,iSum1=0,iSum2=0;

  for(i=0;i<iSize;i++)
  {
    if((Arr[i]%2)==0)
    {
      iSum1=iSum1+Arr[i];
    }
     else if((Arr[i]%2)!=0)
     {
       iSum2=iSum2+Arr[i];
     }
  }
  return iSum1-iSum2;
}
