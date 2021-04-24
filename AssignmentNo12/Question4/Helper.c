#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=4        iCol=5
  Output        :        4 4 4 4 4 
                         3 3 3 3 3 
                         2 2 2 2 2 
                         1 1 1 1 1 
                         
                                                                                           */
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern.
void Pattern(int iRow,int iCol)
{
  int i=1,j=1;    
   
   //printf("\n");

     for(i=iRow;i>=1;i--)
   {
      for(j=iCol;j>=1;j--)
      {
        if(j==1)
        {
          printf("%d\t",i);
        }
         
        else{
          printf("%d\t",i);
        }
      }
     printf("\n");
   }
}
   