#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=3        iCol=5
  Output        :        A A A A A 
                         B B B B B 
                         C C C C C
                         
                                                                                           */
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern.
void Pattern(int iRow,int iCol)
{
  int i=1,j=1;    
   char ch1='A';
   //printf("\n");

     for(i=0;i<iRow;i++)
   {
      for(j=0;j<iCol;j++)
      {
        if(j%2==0)
        {
          printf("%c\t",ch1+i);
        }
         
        else{
          printf("%c\t",ch1+i);
        }
      }
     printf("\n");
   }
}
   