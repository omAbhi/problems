//accept no. & print difference of its summation of factors and non-factors

# include <stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0;
	int iSum=0;
	int iDiff=0;
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum= iSum+iCnt;
			
		}
		
		if(iNo%iCnt!=0)
		{
			iDiff= iDiff+iCnt;
			
		}
	}
	printf("sum of factors is: %d \n ",iSum);
	printf("sum of non-factors is: %d \n",iDiff);
	return iSum-iDiff;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("enter number");
	scanf("%d",&iValue);
	iRet= FactDiff(iValue);
	
	printf("difference of factors & non-factors is %d ",iRet);
	
	return 0;
	
}