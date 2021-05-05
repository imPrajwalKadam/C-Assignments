#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  Display
//Paramiter     :  Integer
//Return Value  :  Integer
//Description   :  Display Small character
//Input   `     :  A        
//Output        :  Desimal 65                                                                   
//Author        :  Prajwal Pradeep Kadam
//Date          :  24\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.*/
void Display(char ch)
{
if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
{
 
       printf("Desimal: %d\t",ch);
       printf("Octal: %o\t",ch);
       printf("hexadesimal: %x\t",ch);      
       
}
}
