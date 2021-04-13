#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  FactRev
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which will take one number from user And Display  Factors in Decreasing order.
//Input         :  12
//Output        :  6 4 3 2 1
//Author        :  Prajwal Pradeep Kadam
//Date          :  05\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and display its factors in Decring Order
void FactRev(int iNo) 
{
  int iCnt=1;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(iCnt=iNo;iCnt<=iNo;iCnt--)
  {
    if(iNo%iCnt==0)
    {
      printf("%d\n",iCnt);
    }
  }
}
    int main()
{    
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}