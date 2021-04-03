//Accept one number from user and print that number of * on The screen..
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iNum=0;
    printf("Enter Number");
    scanf("%d",&iNum);
    Display(iNum);

    return 0;
}