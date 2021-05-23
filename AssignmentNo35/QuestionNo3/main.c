/*
    Problem Statement : Write a program which display all Product elements of singly linked
                        list.
                        Function Prototype : void DisplayPallindrome( PNODE Head);
                        nput linked list   : |11|->|20|->|32|->|41|  
                        Output             : 1 2 6 4 
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
   
   
    DisplayProduct(First);
    

    return 0;
}