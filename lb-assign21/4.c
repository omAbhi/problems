//program which displays smallest digit of all elements from singly linear LL
//input  |323|->|65|->|628|->|721|        output    2  5  2   1

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
void DisplaySmall(PNODE head)
{
	int iDigit=0,iNo=0,iChk=0,iCnt=0;
	PNODE temp=NULL;
	temp=head;
printf("smallestest digits of elements of LL:   ");
	 while(temp!=NULL)
    {
	
		iNo= temp->data;
		iChk=iNo;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iChk>iDigit)
			{
				iChk=iDigit;
			}
			
			iNo= iNo/10;
		}
		printf("|%d|  ",iChk);
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
	InsertFirst(&first,21);
	InsertFirst(&first,964);
	Display(first);
	ret=Count(first);
 printf("Number of nodes are : %d\n",ret);
 
 
  DisplaySmall(first);
 
 
	return 0;
}