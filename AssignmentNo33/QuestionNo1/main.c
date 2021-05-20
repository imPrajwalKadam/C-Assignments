/*
    Problem Statement : Write a program which search first occurrence of particular element from
                        singly linear linked list.
                        Function should return position at which element is found.
                        
                        Function Prototype : int SearchFirstOcc( PNODE Head , int no );
                        Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
                        Input element : 30
                        Output : 3
*/
#include"Header.h"
int main()
{
    PNODE First=NULL;
    int iRet=0;
    int iNo=0;

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    InsertFirst(&First,30);
    InsertFirst(&First,70);
    

    printf("Enter Number That You Want to Search\n");
    scanf("%d",&iNo);

    iRet=SearchFirstOcc(First,iNo);

    if(iRet==-1)
    {
        printf("No such Element Present in LinkList\n");
    }
    else{
        printf("Enlement Found at poisition : %d\n ",iRet);
    }

    return 0;

}