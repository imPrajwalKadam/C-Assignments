
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
//Paramiter     :  Address of First Pointer,Integer
//Return Value  :  None
//Description   :  It takes address of first pointer of linked list and insert integer in the linked list                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  19th April 2021
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
// Function Name : DisplayLarge
// Parameters    : First pointer
// Return Value  : None
// Description   : it takes first pointer of linked list and display Large Number of  digits of all elements of linked list 
// Author        : Prajwal Pradip Kadam
// Date          : 18th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void DisplayLarge(PNODE Head)
{
    int iDigit = 0;
    int iMax = 0;
    while(Head!=NULL)
    {
        iDigit = Head->iData % 10;
        iMax = iDigit;
        while(Head->iData!=0)
        {
            iDigit = Head->iData % 10;
            if(iDigit>iMax)
            {
                iMax = iDigit;
            }
            Head->iData = Head->iData / 10;
        }
        printf("%d\t",iMax);
        Head = Head->next;
    }
    printf("\n");
}