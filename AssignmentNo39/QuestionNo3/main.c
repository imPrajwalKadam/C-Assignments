

#include "Header.h"

int main()
{
    char str[20];
    int iRet=0;
    printf("Enter character\n");
    scanf("%[^'\n']c",str);
    iRet=CountChar(str);
    printf("Count of Character is:%d",iRet);

    return 0;
}