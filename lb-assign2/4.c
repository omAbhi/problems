//accept two numbers from user and display first number in second number of times. eg. input: 4,5  output:4 4 4 4 4 (4 should be printed 5 times)

# include <stdio.h>

void Display(int iNo1,int iFrequency)
{
	int iCnt=0;
	for(iCnt=1; iCnt<=iFrequency; iCnt++)
	{
		printf("%d ",iNo1);
	}
	
}

int main ()
{
	int iValue=0,iCount=0;
	printf("enter the first no\n");
	scanf("%d",&iValue);
	printf("enter second number (frequency)\n");
	scanf("%d",&iCount);
	Display(iValue, iCount);
	
	return 0;
}