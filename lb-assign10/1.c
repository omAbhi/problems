//accept N nos from user & check whether 11 is present in that nos

# include <stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength,int No)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==No)
		{
			return TRUE;
		}
		
	}
}
int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *p=NULL;
	BOOL bRet;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter %d elements of array\n",iSize);
	p= (int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("unable to allocate memory\n");
		return -1;
	}
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter %d element:",iCnt+1);
		scanf("%d",&p[iCnt]);
		
	}
	printf("enter the number to search \n");
	scanf("%d",&iValue);
	bRet=Check(p,iSize,iValue);
	if(bRet==TRUE)
	{
		printf("number is present\n");
	}
	else
	{
		printf("number is absent\n");
	}
	free(p);
	return 0;
}