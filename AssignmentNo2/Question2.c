//Accept One Number from user and print that number of * on Screen.
#include<stdio.h>

void Display(int iNo)
{
    int iValue=0;
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}