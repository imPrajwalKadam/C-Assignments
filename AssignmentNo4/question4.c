  //write program which accept number from user and return 
//summetion of all its Non-factors.
//Input:12
//Output:50
#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt=0,iSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      if(iNo%iCnt!=0)
      {
       iSum=iSum+iCnt;
      }    
    }
 return iSum;
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number");
    scanf("%d",&iValue);
    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}