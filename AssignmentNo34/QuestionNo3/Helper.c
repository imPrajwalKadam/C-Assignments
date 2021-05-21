
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
    PNODE NewNode = NULL;
    PNODE Temp = *Head;

    NewNode = (PNODE)malloc(sizeof(NODE));
    NewNode->iData=iNo;
    NewNode->next=NULL;

    if(*Head==NULL)
    {
        *Head = NewNode;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = NewNode;
        NewNode->next = NULL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstOcc
// Parameters    : First pointer , Integer 
// Return Value  : Integer
// Description   : It takes first pointer of linked list and one integer as input and return first occurence of that integer  
// Author        : Prajwal Pradip Kadam
// Date          : 16th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int AddEven(PNODE Head)
{
    PNODE Temp = Head;
    int iSum = 0;

    while(Temp != NULL)
    {
        if((Temp->iData%2)==0)
        {
            iSum = iSum + Temp->iData;
        }
        Temp = Temp->next;
    }
    return iSum;
}

