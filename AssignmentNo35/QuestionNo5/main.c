/*
    Problem Statement : Write a program which display smallest digits of all element from singly
                        linear linked list.
                        
                        Function Prototype : void DisplaySmall( PNODE Head);
                        
                        Input linked list : |11|->|250|->|532|->|419|
                        Output :1 5 5 9
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iNo=0,iCnt=0,iElement=0;
     
    printf("haw many elements do You want ? \n");
    scanf("%d",&iNo);

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Enter %d Number\n",iCnt);
        scanf("%d",&iElement);
        InsertLast(&First,iElement);    

    }   
   
   
 DisplayLarge(First);
    

    return 0;
}