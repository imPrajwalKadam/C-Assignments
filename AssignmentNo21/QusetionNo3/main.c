
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
  printf("it  is Digit");
}     
else{
  printf("it is not Digit");
}
return 0;
     }