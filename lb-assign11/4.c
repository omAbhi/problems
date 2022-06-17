//accept N nos & return 3 digit nos
# include<stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

int Digits(int Arr[], int iLength)
{
	int iCnt=0;
	printf("three digit numbers are:  ");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>99)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	
}
int main()
{
	int iSize=0,iCnt=0;
	BOOL bRet=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter %d elements of array\n",iSize);
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter %d element of array",iCnt);
		scanf("%d",&p[iCnt]);
		
	}
	Digits(p,iSize);
free(p);
	
	return 0;
}