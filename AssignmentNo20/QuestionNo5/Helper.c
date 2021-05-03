#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Minimum
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Accept N numbers from user and return the Difference Between Maximum number and Smallest number.
//Input         :  N:6                    Elements:8225  665  3 76 953 858
// Output       :  17 17 3 13 3 17 21                                                                       
//Author        :  Prajwal Pradeep Kadam
//Date          :  19\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and display summation of digits of each   number.  
void Digits(int Arr[],int iLength)
{  
   int i=0;
   int iDigit=0;
   int iNo = 0;
   int iCnt = 0;
   int iSum=0;
   for(i=0;i<iLength;i++)
   {
      iNo = Arr[i];
      while(iNo>0)
      {
         iDigit=iNo%10;
         iNo=iNo/10;
         iSum=iSum+iDigit;   
      }
      printf("%d\t",iSum);
      iSum=0;
   }
}


