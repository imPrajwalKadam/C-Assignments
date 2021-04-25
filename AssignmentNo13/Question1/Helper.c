#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=4        iCol=4
  Output        :        * # # # 
                         * * # # 
                         * * * # 
                         * * * *                                                                                  */
//Author        :  Prajwal Pradeep Kadam
//Date          :  14\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern.
void Pattern(int iRow,int iCol)
{
  int i=1,j=1;    
   
   printf("\n");

     for(i=iCol;i>=1;i--)
   {
      for(j=iRow;j>=1;j--)
      {
        if(j<i)
        {
          printf("#\t");
        }
        else{
          printf("*\t");
      }
    }
       printf("\n");
   }
}  

  