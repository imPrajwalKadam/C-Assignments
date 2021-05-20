/*
    Problem Statement : Write a program which Addition of particular element from
                        singly linear linked list.
                        Function should return Addition of Elements.
                        
                        Function Prototype : int Addition( PNODE Head );
                        Input linked list : |10|->|20|->|30|->|40|
                        Input element : 30
                        Output : 3
*/
#include"Header.h"
int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);



    iRet=Addition(First);

    if(iRet==-1)
    {
        printf("No such Element Present in LinkList\n");
    }
    else{
        printf("Addition Of Node is: %d\n ",iRet);
    }

    return 0;

}