/*
    Problem Statement : Write a program which reverse each element of singly linked list. 
   Function Prototype : void Reverse( PNODE Head); 
    Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
           Output     : |11|->|82|->|71|->|14|->|6|->|98|
*/

#include "Header.h"

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,11);
    Insert(&First,28);
    Insert(&First,17);
    Insert(&First,41);
    Insert(&First,6);
    Insert(&First,89);
    
    Display(First);
    Reverse(First);
    

    return 0;
}