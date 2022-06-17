# include <stdio.h>

void SumNonFactor(int iNo)
{
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
	if(iNo%iCnt!=0)
	{
		printf("%d \n",iCnt);
		iSum= iSum+ iCnt;
	}		
	
	
	
	}
	printf("summation of non factors is: %d ",iSum);
	
}
int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	SumNonFactor(iValue);
}