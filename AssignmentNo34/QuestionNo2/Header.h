#include<stdio.h>
#include<stdlib.h>

struct node
{
     int iData;
     struct node*Next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE,int);
void DisplayPrime(PNODE);
