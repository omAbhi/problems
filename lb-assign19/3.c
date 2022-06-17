//write a prog which returns addition of all elements from singly LL
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)       // If LL is empty
    {
        *Head = newn;
    }
    else        // If LL contains atleast one node
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");
	printf("input Linked List:  ");
    while(Head != NULL)
    {
        printf("|%d|->",Head -> data);
        Head = Head->next;
    }
    printf("\n");
}


int Count(PNODE head)
{
     int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }
    return iCnt;
}

int Addition(PNODE head)
{
    int iCnt = 0,iSum=0;
	PNODE temp=head;
    while(temp != NULL)
    {
		iSum= iSum+temp->data;
         temp = temp->next;
    }
    return iSum;
}

int main()
{
	int ret=0,cnt=0,element=0;
    PNODE First = NULL;    

    InsertFirst(&First,201); 
    InsertFirst(&First,101);    
    InsertFirst(&First,501);   
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
	
 ret= Addition(First);
 printf("Addition of elements is : %d\n",ret);
 cnt=Count(First);
printf("number of elements are: %d\n",cnt);
    return 0;
}
