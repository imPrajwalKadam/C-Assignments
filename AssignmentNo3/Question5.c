//Accept one character from user and check whether the
// character is vowel(a,e,i,o,u) or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int ChkVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
      return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter charcter\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
        printf(" It is  Vowel.");
    }
    else
    {
        printf(" It is not vowel");
    }
    return 0;
}