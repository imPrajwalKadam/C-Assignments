#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=4        iCol=4
  Output        :      
                    1 2 3 4 
                      2 3 4
                        3 4
                          4 


Program Layout :                                                                         */
//Author        :  Prajwal Pradeep Kadam
//Date          :  14\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern.
void Pattern(int iRow,int iCol)
{
  int i=1,j=1;    
   
   printf("\n");
   
     for(i=1;i<=iCol;i++)
   {
      for(j=1;j<=iRow;j++)
      {
        if(j>=i)
        {
          printf("%d\t",j);
        }
         else{
           printf(" \t");
         }
    }
       printf("\n");
   }
}  

  