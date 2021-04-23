#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=3       iCol=4
  Output        :        1 1 1 1 
                         2 2 2 2 
                         3 3 3 3 
                         
                                                                                           */
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern.
void Pattern(int iRow,int iCol)
{
   int i=1,j=1;
   printf("\n");

   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
      {
         printf("\t%d",i);
      }
     printf("\n");
   }
}
   