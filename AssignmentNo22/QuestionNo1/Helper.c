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
/*Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255.      */ 

void DisplayASCII()
{
   int i=0;
   printf("------------------------------------------------------\n");

   printf("ASCII Table\n");
   
   printf("------------------------------------------------------\n");
   for(i=0;i<=128;i++)
   {
      printf("%c\t%d\t%o\t%x\n",i,i,i,i);
   }
   printf("------------------------------------------------------\n");
}