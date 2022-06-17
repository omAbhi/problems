//write a program which displays all palindrome element of singly linear LL
//input  |323|->|65|->|64146|->|7|        output   |323|->|64146|->|7|
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
	int iDigit=0,iNo=0,iSum=0,iCnt=0;
	PNODE temp=NULL;
	temp=head;
    printf("palindrome numbers from LL:   ");

	 while(temp!=NULL)
    {
		
		iSum=0;
		iNo= temp->data;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum=iSum*10 + iDigit;
			iNo= iNo/10;
		}
		iNo= temp->data;
		
		if(iNo==iSum)
		{
			printf("%d  ",iSum);
		}
		
		temp = temp->next;
    }
	
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
 
 
  Palindrome(first);
 
 
	return 0;
}