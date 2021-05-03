#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Accept N numbers from user and return the largest number.
//Input         :  N:6                    Elements:85 66 3 76 93 88 
// Output       :                                                                           
//Author        :  Prajwal Pradeep Kadam
//Date          :  18\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the largest number.
int Maximum(int Arr[],int iLength)
{
 int i=0,iMax=0;
if(Arr==NULL)
 {
   return -1; 
 }
 iMax=Arr[0];
 
  for(i=0;i<iLength;i++)
    {
       if(Arr[i]>iMax)
       {
          iMax=Arr[i];
       }
    }
       return iMax;
  }


