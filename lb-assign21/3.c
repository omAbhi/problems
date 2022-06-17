//write a program which displays product of all digits of all elements from singly linear LL
//input  |323|->|65|->|60|->|72|        output   18  30  6  14   (dont consider 0)(i.e. treat 0 as 1)
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
void Palindrome(PNODE head)
{
	int iDigit=0,iNo=0,iMult=1,iCnt=0;
	PNODE temp=NULL;
	temp=head;

	 while(temp!=NULL)
    {
	
		iNo= temp->data;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit==0)
			{
				iDigit=1;
			}
			iMult=iMult*iDigit;
			
			iNo= iNo/10;
		}
		printf("%d  ",iMult);
		temp = temp->next;
	iMult=1;
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
	InsertFirst(&first,21);
	InsertFirst(&first,496);
	Display(first);
	ret=Count(first);
 printf("Number of nodes are : %d\n",ret);
 
 
  Palindrome(first);
 
 
	return 0;
}