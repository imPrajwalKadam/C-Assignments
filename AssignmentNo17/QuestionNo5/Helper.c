#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  Accept N numbers from user and display all such elements which are multiples of 11. 
//Input         :  N:6        Elements:85 66 3 55 93 88
// Output       :  66 55 88                                                                            
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such elements which are multiples of 11. 
void Display(int Arr[],int iSize)
{
  int i=0;
   printf("this number is Multyply by 11:\n");
  for(i=0;i<iSize;i++)
  {
       if((Arr[i]%11)==0)
    {
      printf("%d\n",Arr[i]);
    }
  }
}
