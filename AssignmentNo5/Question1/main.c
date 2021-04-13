/*Write Program which accept number from user and display its multiplication of
Factors*/
#include"Header.h"
int main()//Entery point Function
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=Multfact(iValue);
    printf("Multiplication is: %d",iRet);
    return 0;
}