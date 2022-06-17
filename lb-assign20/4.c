//return second maximum elements from singly linear LL
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
int SecondMax(PNODE head)
{
	int iCnt=0,iMax2=0,iMax1=0,iNo=0;
	PNODE temp=NULL;
	temp=head;
	 while(temp!=NULL)
    {
		iNo= temp->data;
		if(iMax1 < iNo)
		{
	      iMax1=iNo;
		}
	    temp = temp->next;
    }
	temp=head;
   
	 while(temp!=NULL)
    {
		iNo= temp->data;
		//printf("%d aa\n",iMax1);
		
		if((iMax2 < iNo) &&  (iNo != iMax1))
		{
			iMax2= iNo;
		}
		temp = temp->next;
	}
	
    return iMax2;
}
int main()
{
	int ret=0,cc=0;
	PNODE first=NULL;
	
	InsertFirst(&first,20);
	InsertFirst(&first,90);
	InsertFirst(&first,10);
	InsertFirst(&first,1);
	InsertFirst(&first,80);
	Display(first);
	ret=Count(first);
 printf("Number of nodes are : %d\n",ret);
 
 
 cc= SecondMax(first);
 printf("sum of even numbers: %d ",cc);
 
	return 0;
}