
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  InsertFirst
//Paramiter     :  Address of First Pointer,Integer
//Return Value  :  None
//Description   :  It takes address of first pointer of linked list and insert integer in the linked list                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  16th April 2021
//////////////////////////////////////////////////////////////////////////////////////////
#include"Header.h"

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE Temp =*Head;

    newn=(PNODE)malloc(sizeof(NODE));
    newn-> Data = No;
    newn-> Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else{
        while(Temp->Next!=NULL)
        {
            Temp = Temp -> Next;
        }
        Temp-> Next = newn;
        newn-> Next = NULL;
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

int SearchFirstOcc(PNODE Head,int No)
{
    PNODE Temp=Head;
    int iCnt=1;
    while(Temp != NULL)
    {
        if((Temp -> Data)==No)
        {
            break;
        }
        iCnt++;
        Temp = Temp->Next;
    }
        if(Temp==NULL)
        {
            return -1;
        }
        else{
            return iCnt;
        }
} 
