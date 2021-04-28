#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   : Accept N numbers from user and display all such elements which are divisible by 5. 
//Input         :  N:6    Elements:85 66 3 80 93 88
// Output       :  53                                                                             
//Author        :  Prajwal Pradeep Kadam
//Date          :  16\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return difference between summation of even elements and summation of odd elements. 
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
  int i=0;
  
  for(i=0;i<iSize;i++)
  {
       if(Arr[i]%5==0)
    {
      printf("this number is Divisible by Five:%d\n",Arr[i]);
  }
  }
}
