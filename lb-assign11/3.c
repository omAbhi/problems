//accept N nos & return difference between the largest and smallest no
# include<stdio.h>
# include<stdlib.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;

int Difference(int Arr[], int iLength)
{
	int iCnt=0,iDiff=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[0]<Arr[iCnt])
		{
			Arr[0]= Arr[iCnt];
		}
		else if(Arr[1]>Arr[iCnt])
		{
			Arr[1]= Arr[iCnt];
		}
	}
	iDiff= Arr[0]-Arr[1];
	return iDiff;
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
	bRet= Difference(p,iSize);
		printf("difference is: %d",bRet);
	
	return 0;
}