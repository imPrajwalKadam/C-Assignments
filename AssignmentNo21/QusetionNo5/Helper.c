#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   : Accept Character from user and check whether it is Small or not (A-Z).
//Input         :  g        :     G
//Output        :  True     :     False                                                                
//Author        :  Prajwal Pradeep Kadam
//Date          :  23\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/* Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive)                     */ 
void DisplaySchedule(char chDiv)
{
   char A='\0',B='\0',C='\0',D='\0';
   if(chDiv=='A')
   {
      printf("Your Exam at 7 AM\n");
   }
   else if(chDiv=='B')
   {
      printf("Your Exam at 8.30 AM\n");
   }
   else if(chDiv=='C')
   {
      printf("Your exam at 9.20 Am\n");
   }
   else if(chDiv=='D')
   {
      printf("Your exam is 10.30 AM\n");
   }
   else{
      printf("!!!...INVALID DIVISION...!!!\n");
   }

}