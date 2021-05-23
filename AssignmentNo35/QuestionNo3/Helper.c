
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
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
// Function Name : DisplayProduct
// Parameters    : First pointer
// Return Value  : None
// Description   : it takes first pointer of linked list and display product of all digits of all elements of linked list 
// Author        : Prajwal Pradip Kadam
// Date          : 18th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void DisplayProduct(PNODE Head)
{
    int iDigit = 0;
    int iProduct = 1;
    while(Head!=NULL)
    {
        iProduct = 1;
        while(Head->iData!=0)
        {
            iDigit = Head->iData % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iProduct = iProduct * iDigit;
            Head->iData = Head->iData / 10;
        }
        printf("%d\t",iProduct);
        Head = Head->next;
    }
    printf("\n");
}




