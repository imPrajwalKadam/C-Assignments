/*
    Problem Statement : Write a program which displays all elements which are perfect from singly
                        linear linked list.
                        Function Prototype :int DisplayPerfect( PNODE Head);
                        Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
                        Output : 6 28
*/
#include"Header.h"


int main()
{

    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,17);
    InsertFirst(&First,41);
    InsertFirst(&First,6);
    InsertFirst(&First,89);

   DisplayPrime(First);
   //printf("Prime Number is:%d\t",iRet);

    return 0;
}