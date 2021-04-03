//Accept one number from user if number is less then 10 then print "Hello"
//otherwise print "Demo".
#include<stdio.h>
int Display(int iNo)
{
    if(iNo<=10)
    {
        printf("Hello..");
    }
    else
    {
        printf("Demo..");
    }
}
int main()
{
    int iRet=0;

    printf("Enter Nnumber\n");
    scanf("%d",&iRet);
    Display(iRet);

    return 0;
}