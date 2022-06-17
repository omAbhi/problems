//write a program to return a smallest element from the LL

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
        printf("| %d | -> ",Head -> data);
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

int Minimum(PNODE head)
{
    int iCnt = 0,iChk=0,iMax=head->data;
    while(head != NULL)
    {
        iCnt++;
		
			iChk=head->data;
			if(iMax > iChk)
			{
				iMax=iChk;
			}
			
        head = head->next;
    }
    return iMax;
}

int main()
{
	int ret=0,cnt=0,element=0;
    PNODE First = NULL;    

    InsertFirst(&First,201); 
    InsertFirst(&First,101);    
    InsertFirst(&First,301);   
    InsertFirst(&First,71);
    InsertFirst(&First,2);
	InsertFirst(&First,5);
	InsertFirst(&First,21);
	InsertFirst(&First,10);

    Display(First);
	

 
 ret= Minimum(First);
 printf("output : %d\n",ret);
 cnt=Count(First);
printf("number of elements are: %d\n",cnt);
    return 0;
}
