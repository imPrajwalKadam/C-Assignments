
#include"Header.h"
int main()
{
     char cValue='\0';
     BOOL bRet=FALSE;
     

     printf("Enter the character:");
     scanf("%c",&cValue);

     bRet=checkCap(cValue);

     if(bRet==TRUE)

{
  printf("it  is capital character");
}     
else{
  printf("it is not capital character");
}
return 0;
     }