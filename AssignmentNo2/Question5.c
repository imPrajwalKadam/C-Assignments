//Accept number from user and check whether number is even or odd.
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
    printf("Even Number\n",iNo);
    }
    else
    {
    printf("Odd Number\n",iNo);
    }
}

int main()
{
    int iRet=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iRet);
    bRet=ChkEven(iRet);
    return 0;
}