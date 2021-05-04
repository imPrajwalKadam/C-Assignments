
#include"Header.h"
int main()
{
     char cValue='\0';
     BOOL bRet=FALSE;
     

     printf("Enter the character:");
     scanf("%c",&cValue);

     bRet=checkSmall(cValue);

     if(bRet==TRUE)

{
  printf("it  is Small case character\n");
}     
else{
  printf("it is Not Small case character\n");
}
return 0;
     }