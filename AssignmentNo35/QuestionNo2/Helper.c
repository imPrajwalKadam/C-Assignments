
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  InsertLast
//Paramiter     :  Address of First Pointer,Integer
//Return Value  :  None
//Description   :  It takes address of first pointer of linked list and insert integer in the linked list                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  18th April 2021
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"

void InsertLast(PPNODE Head,int iNo)
{
    PNODE NewN = NULL;
    PNODE Temp = *Head;

   NewN = (PNODE)malloc(sizeof(NODE));
   NewN->iData=iNo;
    NewN->next=NULL;

    if(*Head==NULL)
    {
        *Head =   NewN;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next =   NewN;      
    }
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayPallindrome
// Parameters    : First pointer
// Return Value  : None
// Description   : it takes first pointer of linked list and display product of all digits of all elements of linked list 
// Author        : Prajwal Pradip Kadam
// Date          : 18th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void DisplayPallindrome(PNODE Head)
{
    int iElement = 0;
    int iTemp = 0;
    int iDigit = 0;

    while(Head!=NULL)
    {
        iElement = 0;
        iTemp = Head->iData;
        while(Head->iData!=0)
        {
            iDigit = Head->iData % 10;
            iElement = ((iElement * 10) + (iDigit));
            Head->iData = Head->iData / 10;
        }
        if(iElement==iTemp)
        {
            printf("%d\t",iElement);
        }    
        Head = Head->next;
    }
    printf("\n");
}





