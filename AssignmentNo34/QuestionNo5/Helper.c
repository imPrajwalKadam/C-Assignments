
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



void SumDigit(PNODE Head)  
{
    PNODE Temp = Head;
    int iNum = 0;
    int iSum = 0;

    printf("Sum of digits is :\t");

    while(Temp != NULL)
    {
       
        while(Temp->iData!=0)
        {
            iNum = Temp->iData % 10;
            iSum = iSum + iNum;
           Temp->iData = Temp->iData / 10;
        }
        printf("%d\t",iSum);
        iSum=0;
        Temp = Temp->next;
    }
}