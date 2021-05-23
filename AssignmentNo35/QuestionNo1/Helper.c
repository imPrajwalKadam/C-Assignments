
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  AddEven
//Paramiter     :  Address of First Pointer,Integer
//Return Value  :  None
//Description   :  It takes address of first pointer of linked list and insert integer in the linked list                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  17th April 2021
//////////////////////////////////////////////////////////////////////////////////////////
#include "Header.h"

void Insert(PPNODE Head,int iNo)
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
       NewN->next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("\n : BEFORE   :  \n");
    while(Head  != NULL)
    {
        printf("| %d | -> ",Head->iData);
        Head=Head->next;
    }
    printf("| NULL |\n");

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse
// Parameters    : First pointer , Integer 
// Return Value  : Integer
// Description   : It takes first pointer of linked list and one integer as input and Displays Reverse of Link List  
// Author        : Prajwal Pradip Kadam
// Date          : 16th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Reverse(PNODE Head)  
{
  
    int iDigit = 0;
    int iElement = 0;
    printf("\n: AFTER :\n");

    while(Head != NULL)
    {
        iElement=0;
        while(Head->iData != 0)
        {
            iDigit = Head->iData % 10;
            iElement = ((iElement * 10 )+(iDigit));
            Head->iData=Head->iData / 10;
        }
        Head->iData = iElement;
        printf("| %d | -> ",Head->iData);
        Head=Head->next;
    }
    printf("| NULL |\n");
}