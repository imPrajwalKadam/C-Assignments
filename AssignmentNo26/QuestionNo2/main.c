#include"Header.h"
int main()
{
    char arr[20];
    char brr[20];
    int iNo = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter number of elements to copy\n");
    scanf(" %d",&iNo);
    
    strncpyX(arr,brr,iNo);
    
    printf("String after copy is : %s\n",brr);
    return 0;
}