//Write a program which accept number from user and display
// its muliplication of factors
//Input  :12
//Output:(144)(1*2*3*4*6)
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt=0,iMult=1;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMult=iMult*iCnt;
        }
    }
        return iMult;
}
int main()
{
    int iNum;
    int iRet;
    printf("Enter number\n");
    scanf("%d",&iNum);
    iRet=MultFact(iNum);
    printf("%d",iRet);
    return 0;
}