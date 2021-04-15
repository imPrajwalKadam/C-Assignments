//Write a program which accept number from user and check whether it contains 0 in it or Not
#include"Header.h"
 int main()
{ 
    BOOL bRet=FALSE;   
    int iValue=0;    
    printf("Enter number:");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==TRUE)
    {
        printf("it Contains Zero");
    }
    else
    {
        printf("their is no Zero");
    }
       return 0;
}