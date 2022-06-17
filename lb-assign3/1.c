//accept number from user & print that many even numbers

# include <stdio.h>

void PrintEven(int iNo)
{	
if(iNo<=0)
{
	iNo= -iNo;
}
int iNo2=0,iCnt=0;

iNo2= (iNo*2);
	for(iCnt=2;iCnt<=iNo2;iCnt+=2)
	{
		printf("%d ", iCnt);
	}
}
int main()
{
	int iValue=0;
	printf("enter no\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	return 0;
}