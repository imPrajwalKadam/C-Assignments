#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name : Minimum
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Accept N numbers from user and return the Smallest number.
//Input         :  N:6                    Elements:85 66 3 76 93 88 
// Output       :    3                                                                       
//Author        :  Prajwal Pradeep Kadam
//Date          :  19\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the Smallest number.
int Minimum(int Arr[],int iLength)
{
 int i=0,iMin=0;
if(Arr==NULL)
 {
   return -1; 
 }
 iMax=Arr[0];
 
  for(i=0;i<iLength;i++)
    {
       if(Arr[i]<iMin)
       {
          iMax=Arr[i];
       }
    }
       return iMin;
  }


