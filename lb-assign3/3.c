//write a prog to accept no. from user & print even factors of that no.

# include <stdio.h>

void DisplayFactor(int iNo)
{
	if(iNo<=0)
	{
		iNo= -iNo;
	}
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iCnt%2==0) && (iNo%iCnt ==0))
		{
			printf("%d ",iCnt);
		}
	}
}
int main ()
{
	int iValue=0;
	printf("enter the no\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}