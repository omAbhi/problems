//accept N nos, accept one more no as No & return the index of  last occurrence of that no
# include <stdio.h>
# include<stdlib.h>

int FirstOcc(int Arr[], int iLength,int No)
{
	int iCnt=iLength,iIndex=0;
	for(iCnt<=iLength;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==No)
		{
			iIndex= iCnt;
			break;
		}
		
	}
	return iIndex;
}
int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *p=NULL;
	int bRet=0;
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
	bRet=FirstOcc(p,iSize,iValue);
	printf("last occurrence is at index:  %d",bRet);
	free(p);
	return 0;
}