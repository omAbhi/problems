//accept N nos from user & accept one another no as No,return frequency of No from it

# include<stdio.h>
# include<stdlib.h>
int Frequency(int Arr[], int iLength, int No)
{
	int iCnt=0,iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]== No)
		{
			iSum++;
		}
	}
	return iSum;
}
int main()
{
	int iSize=0,iCnt=0,iRet=0,iNo=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter elements of array\n");
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	printf("enter number to search\n");
	scanf("%d",&iNo);
	iRet= Frequency(p,iSize,iNo);
	printf("frequency of number is:  %d ",iRet);
	free(p);
	return 0;
}