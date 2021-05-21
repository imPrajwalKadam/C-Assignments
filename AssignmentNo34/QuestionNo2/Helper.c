
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  InsertFirst
//Paramiter     :  Address of First Pointer,Integer
//Return Value  :  None
//Description   :  It takes address of first pointer of linked list and insert integer in the linked list                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  16th April 2021
//////////////////////////////////////////////////////////////////////////////////////////
#include"Header.h"

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
    PNODE Temp =*Head;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->iData=iNo;
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
// Function Name : DisplayPrime
// Parameters    : first pointer , Integer
// Return Value  : None
// Description   : it used to Display perfect numbers from Linked List
// Author        : Prajwal Pradip Kadam 
// Date          : 17th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
    PNODE Temp = Head;
    int iCnt = 0;
    int iFact = 0;
   
    printf("Prime Numbers are : ");

    while(Temp != NULL)
    {
       iFact=0;
         for(iCnt=1;iCnt<=((Temp->iData)/2);iCnt++)
        {   
        if((Temp->iData % iCnt)==0)
          {
            iFact++;
          }
        }
        if(iFact==1)
        {
           printf("%d\t",Temp->iData);
        }
        Temp=Temp->Next;
    }
    printf("\n");
}