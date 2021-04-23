   #include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Pattern
//Paramiter     :  Integer
//Return Value  :  Integer
//Discription   :  This is simple function which Accept number from user and display below pattern.
/*Input         :  iRow=4,   iCol=3
  Output        :        * * *
                         * * *
                         * * *
                         * * *                                                                       */
//Author        :  Prajwal Pradeep Kadam
//Date          :  11\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
//Accept number of rows and number of columns from user and display below pattern. 
void Pattern(int iRow,int iCol)
{
   int i=1,j=0;
   printf("\n");

   for(i=1;i<=iRow;i++)
   {
      for(j=1;j<=iCol;j++)
      {
         printf("*\t");
      }
     printf("\n");
   }
}
   