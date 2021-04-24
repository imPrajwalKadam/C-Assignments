#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=4      iCol=4
  Output        :        A B C D 
                         a b c d 
                         A B C D 
                         a b c d 
                         
                                                                                           */
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern.
void Pattern(int iRow,int iCol)
{
  int i=1,j=1;    
   char ch1='A',ch2='a';
   //printf("\n");

     for(i=0;i<iRow;i++)
   {
      for(j=0;j<iCol;j++)
      {
        if(i%2==0)
        {
          printf("%c\t",ch1+j);
        }
         
        else{
          printf("%c\t",ch2+j);
        }
      }
     printf("\n");
   }
}
   