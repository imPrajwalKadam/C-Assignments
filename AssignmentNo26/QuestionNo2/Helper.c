#include"Header.h"
////////////////////////////////////////////////////////////////////////////////////
//Function      :  strncpyX
//Paramiter     :  Character
//Return Value  :  Character
//Description   :  
//Input         :   
//Output        :                                                        
//Author        :  Prajwal Pradeep Kadam
//Date          :  29\03\2021
//////////////////////////////////////////////////////////////////////////////////////////
/*
Write a program which accept string from user and copy the 
contents of that string into another string.  */
void strncpyX(const char *src, char *dest, int iValue)
{
    if((src == NULL) || (dest == NULL) || (iValue <= 0))
        {
            return;
        }
        while ((*src != '\0')&&(iValue>0))
        {
            *dest = *src;
            dest++;
            src++;
            iValue--;
        }
    *dest = '\0';
}
