//accept N nos & return frequency of even nos.

# include<stdio.h>
# include <stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0,iFrequency=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}
int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	p= (int*)malloc(iSize*sizeof(int));
	printf("enter elements of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
		iRet= Frequency(p, iSize);
		
	}
	printf("frequency of even elements are: %d ",iRet);
	free(p);
	return 0;
}