#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  // Accept N numbers from user and accept Range, Display all elements from that range 
//Input         :  N:6  Start:60  End:90    Elements:85 66 3 76 93 88 
// Output       :  66 76 88                                                                         
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept Range, Display all elements from that range 
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
  int i=0;
  for(i=0;i<iLength;i++)
  {
    Arr[i]==iLength;
    if((iStart<=Arr[i])&&(iEnd>=Arr[i]))
    {
      printf("Range is:%d\n",Arr[i]);
    }
    else{
      printf("INVALID Range\n");
    }
  }
}