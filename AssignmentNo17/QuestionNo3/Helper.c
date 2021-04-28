#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   : //Accept N numbers from user and display all such elements which are even and divisible by 5.
//Input         :  N:6    Elements:85 66 3 80 93 88
// Output       :  80                                                                             
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such elements which are even and divisible by 5.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
  int i=0;
  
  for(i=0;i<iSize;i++)
  {
       if(((Arr[i]%2)==0)&&((Arr[i]%5)==0))
    {
      printf("this number is Divisible by Five:%d\n",Arr[i]);
  }
  }
}
