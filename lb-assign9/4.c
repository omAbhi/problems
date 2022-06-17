//accept N nos from user & return frequency of 11 in it

# include<stdio.h>
# include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
	int iCnt=0,iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]== 11)
		{
			iSum++;
		}
	}
	return iSum;
}
int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter elements of array\n");
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet= Frequency(p,iSize);
	printf("frequency of 11 is:  %d ",iRet);
	free(p);
	return 0;
}