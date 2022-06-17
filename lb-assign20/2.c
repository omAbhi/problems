//print prime nos from singly linear LL
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
int DisplayPrime(PNODE head)
{
	int iCnt=0,iNo=0,c=0;
	PNODE temp=NULL;
	temp=head;
	printf("prime elements from LL:  ");
	 while(temp!=NULL)
    {
		iNo= temp->data;
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
		if(iNo%iCnt==0)
		{
			c++;
		}
		}
		if(c==2)
		{
			printf("%d  ",iNo);
		}
		else
		{
			
		}
		c=0;
		temp = temp->next;
    }
		
	
    return iNo;
}
int main()
{
	int ret=0,cc=0;
	PNODE first=NULL;
	InsertFirst(&first,40);
	InsertFirst(&first,15);
	InsertFirst(&first,51);
	InsertFirst(&first,17);
	InsertFirst(&first,20);
	InsertFirst(&first,21);
	InsertFirst(&first,79);
	InsertFirst(&first,11);
	Display(first);
	ret=Count(first);
 printf("Number of nodes are : %d\n",ret);
 

 DisplayPrime(first);
 
	return 0;
}