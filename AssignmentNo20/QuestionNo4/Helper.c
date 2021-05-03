#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name : Minimum
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Accept N numbers from user and return the Difference Between Maximum number and Smallest number.
//Input         :  N:6                    Elements:8225 665 3  76 953 858
// Output       :  665 953 858                                                                       
//Author        :  Prajwal Pradeep Kadam
//Date          :  19\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and display all such numbers which contains 
// 3 digits in it. 
void Digits(int Arr[],int iLength)
{  
   int i=0;
   int iNo = 0;
   int iCnt = 0;
   for(i=0;i<iLength;i++)
   {
      iNo = Arr[i];
      while(iNo>0)
      {
         iNo=iNo/10;
         iCnt++;
      }
      if(iCnt==3)
      {
         printf("%d\t",Arr[i]);
      }
      iCnt=0;
   }
}


