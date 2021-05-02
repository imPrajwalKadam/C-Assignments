#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :   Accept N numbers from user and return product of all odd elements. 
//Input         :  N:6                   Elements:15 66 3 70 10 88 
// Output       :  45                                                                         
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from user and return product of all odd elements. 
int Product(int Arr[],int iLength)
{
     int i=0,iMult=1;
     for(i=0;i<iLength;i++)
     {
          if((Arr[i]%2)!=0)
          {
          iMult=iMult*Arr[i];
          }
     }
     return iMult;
  
}