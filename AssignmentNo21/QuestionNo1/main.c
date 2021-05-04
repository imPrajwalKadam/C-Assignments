
#include"Header.h"
int main()
{
     char cValue='\0';
     BOOL bRet=FALSE;
     

     printf("Enter the character:");
     scanf("%c",&cValue);

     bRet=checkAlpha(cValue);

     if(bRet==TRUE)

{
  printf("it  is character");
}     
else{
  printf("it is not character");
}
return 0;
     }