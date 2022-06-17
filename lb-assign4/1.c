//write a prog. which accepts no. from user & displays multiplication of its factors


# include <stdio.h>

int MultFact(int iNo)
{
	int iCnt=0,FactorMult=1;
	printf("factors of %d are \n",iNo);
	for(iCnt=1;iCnt<=iNo;iCnt++)
{
		if(iNo%iCnt==0)
		{
			printf("%d ",iCnt);
			FactorMult= FactorMult* iCnt;
		}
		
}

return FactorMult;
	
}

int main()
{
	int iValue=0,bRet=0;
	printf("enter no\n");
	scanf("%d",&iValue);
	
bRet= MultFact(iValue);
printf("	multiplication of factors is: %d",bRet);
	
	return 0;
}