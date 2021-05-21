/*
    Problem Statement : Write a program which return largest element from singly linear linked
                        list.
                        Function Prototype :int Maximum( PNODE Head);
                        
                        Input linked list : |110|->|230|->|320|->|240|
                        
                        Output : 320
*/
#include"Header.h"
int main()
{
    PNODE First=NULL;
    int iRet=0;

    InsertFirst(&First,110);
    InsertFirst(&First,230);
    InsertFirst(&First,320);
    InsertFirst(&First,240);



    iRet=Maximum(First);

    if(iRet==-1)
    {
        printf("No such Element Present in LinkList\n");
    }
    else{
        printf("Second Maximum Node is: %d\n ",iRet);
    }

    return 0;

}