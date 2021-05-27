
#include "Header.h"
int main()
{

    char str[30];
    int iRet=0;
    printf("Enter String:");
    scanf("%[^'\n']c",str);
    iRet = WhiteSpace(str);
    printf("Number of whight spaces is:%d\n",iRet);
    return 0;
}