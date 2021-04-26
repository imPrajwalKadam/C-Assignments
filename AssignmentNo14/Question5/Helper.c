#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=5        iCol=6
  Output        :        1 2 3 4 
                         1 * * 4 
                         1 * * 4 
                         1 2 3 4                                                                            */
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
        if((j==iCol)||(j==1)||(i==1)||(i==iRow))
        {
          printf("%d\t",j);
        }
        else{
          printf("*\t");
      }
    }
       printf("\n");
   }
}  

  