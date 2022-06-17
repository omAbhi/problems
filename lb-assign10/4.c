//accept N nos & accept range, display all elements from that range

# include <stdio.h>
# include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
int iCnt=0;
for(iCnt=0;iCnt<iLength;iCnt++)
{
	if(iStart < Arr[iCnt]  && Arr[iCnt] < iEnd)
	{
	printf("%d ",Arr[iCnt]);
	}
}
}
int main()
{
	int iSize=0,iCnt=0,iStart=0,iEnd=0;
	int *p=NULL;
	printf("enter size of array\n");
	scanf("%d",&iSize);
	printf("enter %d elements of array\n",iSize);
	p= (int*)malloc(iSize*sizeof(int));
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter %d element of array:  ",iCnt);
		scanf("%d",&p[iCnt]);
	}
	printf("enter start of range\n");
	scanf("%d",&iStart);
	
	printf("enter end of range\n");
	scanf("%d",&iEnd);
	Range(p,iSize,iStart,iEnd);
	free(p);
	return 0;
}