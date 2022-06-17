//program which displays largest digit of all elements from singly linear LL
//input  |323|->|65|->|628|->|721|        output    3  6  8   7

# include<stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}
void Display(PNODE head)
{
	printf("\n");
	while(head!=NULL)
	{
		printf("|%d| -> ",head->data);
		head=head->next;
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
void DisplayLarge(PNODE head)
{
	int iDigit=0,iNo=0,iSum=0,iCnt=0;
	PNODE temp=NULL;
	temp=head;
printf("largest digits of all elements of LL:   ");
	 while(temp!=NULL)
    {
	iSum=0;
		iNo= temp->data;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iSum<iDigit)
			{
				iSum=iDigit;
			}
			iNo= iNo/10;
		}
		printf("|%d|   ",iSum);
		temp = temp->next;
	
    }
	
 
}
int main()
{
	int ret=0,cc=0;
	PNODE first=NULL;
	InsertFirst(&first,518);
	InsertFirst(&first,6);
	InsertFirst(&first,30);
	InsertFirst(&first,28);
	InsertFirst(&first,113);
	InsertFirst(&first,521);
	InsertFirst(&first,496);
	Display(first);
	ret=Count(first);
 printf("Number of nodes are : %d\n",ret);
 
 
  DisplayLarge(first);
 
 
	return 0;
}