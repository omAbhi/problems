//accept N nos from user & check whether 11 is present in that nos

# include <stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			return TRUE;
		}
		
	}
}
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	BOOL bRet;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter elements of array\n");
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
		
	}
	bRet=Check(p, iSize);
	if(bRet==TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is absent\n");
	}
	free(p);
	return 0;
}