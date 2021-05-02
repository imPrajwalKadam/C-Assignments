#include"Header.h"
#define TRUE 0
#define FALSE 1
////////////////////////////////////////////////////////////////////////////////////
//Function Name :   Check
//Paramiter     :  Integer
//Return Value  :  Boolean
//Discription   :  Accept N numbers from user and return difference between frequency of even number and odd numbers. 
//Input         :  N:7        Elements:85 66 3 80 93 88 90
// Output       :  1(4-3)                                                                          
//Author        :  Prajwal Pradeep Kadam
//Date          :  17\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
typedef int BOOL;
BOOL Check(int Arr[],int iSize,int iNo)
{
  int i=0;
  for(i=0;i<iSize;i++)
  {
    if(Arr[i]==iNo)
    {
     break;
    }  
  }
    if(i!=iSize){
      return TRUE;
    }
    else{
      return FALSE;
    }

}
    
  

