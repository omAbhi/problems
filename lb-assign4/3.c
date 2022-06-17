# include <stdio.h>

void NonFactor(int iNo)
{
	int iCnt=0;
	
	for(iCnt=(iNo-1);iCnt>=1;iCnt--)
	{
	if(iNo%iCnt!=0)
	{
		printf("%d ",iCnt);
	}		
	
	
	
	}
	
}
int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	NonFactor(iValue);
}