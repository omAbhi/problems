//print addition of digits of elements from singly linear LL
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
void SumDigit(PNODE head)
{
	int iDigit=0,iNo=0,iSum=0;
	PNODE temp=NULL;
	temp=head;

	 while(temp!=NULL)
    {
		iSum=0;
		iNo= temp->data;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum= iSum+iDigit;
			iNo= iNo/10;
		}
		
		temp = temp->next;
		printf("%d ",iSum);
	
    }
	
   // return iSum;
}
int main()
{
	int ret=0,cc=0;
	PNODE first=NULL;
	InsertFirst(&first,101);
	InsertFirst(&first,6);
	InsertFirst(&first,51);
	InsertFirst(&first,28);
	InsertFirst(&first,11);
	InsertFirst(&first,21);
	InsertFirst(&first,496);
	Display(first);
	ret=Count(first);
 printf("Number of nodes are : %d\n",ret);
 
 
  SumDigit(first);
 //printf("perfect numbers: %d ",cc);
 
	return 0;
}